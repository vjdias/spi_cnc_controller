import sys, re, os
vcd_path = r'tb/tests/temp/spi_full_flow_motion_home_tb.vcd'
want = set([
  'spi_full_flow_motion_home_tb.clk',
  'spi_full_flow_motion_home_tb.rst_n',
  'spi_full_flow_motion_home_tb.prox_in',
  'spi_full_flow_motion_home_tb.step_count_x',
  'spi_full_flow_motion_home_tb.tmc_step_x',
  'spi_full_flow_motion_home_tb.tmc_enn_x',
  'spi_full_flow_motion_home_tb.u_cons.frame_valid',
  'spi_full_flow_motion_home_tb.u_cons.out_msgType',
  'spi_full_flow_motion_home_tb.u_motion.move_enabled',
  'spi_full_flow_motion_home_tb.u_motion.tick',
  'spi_full_flow_motion_home_tb.u_motion.sync_start',
  'spi_full_flow_motion_home_tb.u_motion.start_x',
  'spi_full_flow_motion_home_tb.u_motion.cont_x',
  'spi_full_flow_motion_home_tb.u_motion.home_pending',
  'spi_full_flow_motion_home_tb.u_motion.prox_active',
  'spi_full_flow_motion_home_tb.u_motion.estop_inhibit',
  'spi_full_flow_motion_home_tb.u_motion.move_end_pulse',
  'spi_full_flow_motion_home_tb.u_motion.dir_mask',
  'spi_full_flow_motion_home_tb.u_motion.start_pending',
])

ids = {}
cur_scopes = []
header_done = False
with open(vcd_path, 'r', errors='ignore') as f:
  for line in f:
    if line.startswith('$scope'):
      parts = line.strip().split()
      cur_scopes.append(parts[2])
    elif line.startswith('$upscope'):
      if cur_scopes: cur_scopes.pop()
    elif line.startswith('$var'):
      parts = line.strip().split()
      if len(parts) >= 5:
        idcode = parts[3]
        name = parts[4]
        fullname = '.'.join(cur_scopes + [name])
        ids[idcode] = fullname
    elif line.startswith('$enddefinitions'):
      header_done = True
      break

wanted_ids = {idc:name for idc,name in ids.items() if name in want}
if not wanted_ids:
  print('No wanted signals found. First 120 names:')
  for i,(idc,name) in enumerate(ids.items()):
    if i>=120: break
    print(name)
  sys.exit(0)

vals = {}
transitions = {name: [] for name in want}
cur_time = 0
with open(vcd_path, 'r', errors='ignore') as f:
  passed_defs = False
  for line in f:
    if not passed_defs:
      if line.startswith('$enddefinitions'):
        passed_defs = True
      continue
    if not line:
      continue
    if line[0] == '#':
      try:
        cur_time = int(line[1:].strip())
      except:
        pass
      continue
    c = line[0]
    if c in '01xzXZ':
      idc = line[1:].strip()
      if idc in wanted_ids:
        name = wanted_ids[idc]
        v = c
        if vals.get(name) != v:
          vals[name] = v
          transitions[name].append((cur_time, v))
    elif c == 'b':
      parts = line.strip().split()
      if len(parts) == 2:
        bits = parts[0][1:]
        idc = parts[1]
        if idc in wanted_ids:
          name = wanted_ids[idc]
          v = bits
          if vals.get(name) != v:
            vals[name] = v
            transitions[name].append((cur_time, v))

keys = [
  'spi_full_flow_motion_home_tb.rst_n',
  'spi_full_flow_motion_home_tb.prox_in',
  'spi_full_flow_motion_home_tb.u_cons.frame_valid',
  'spi_full_flow_motion_home_tb.u_cons.out_msgType',
  'spi_full_flow_motion_home_tb.u_motion.move_enabled',
  'spi_full_flow_motion_home_tb.u_motion.sync_start',
  'spi_full_flow_motion_home_tb.u_motion.start_x',
  'spi_full_flow_motion_home_tb.u_motion.cont_x',
  'spi_full_flow_motion_home_tb.u_motion.prox_active',
  'spi_full_flow_motion_home_tb.u_motion.estop_inhibit',
  'spi_full_flow_motion_home_tb.u_motion.move_end_pulse',
  'spi_full_flow_motion_home_tb.tmc_enn_x',
  'spi_full_flow_motion_home_tb.tmc_step_x',
  'spi_full_flow_motion_home_tb.step_count_x',
  'spi_full_flow_motion_home_tb.u_motion.dir_mask',
  'spi_full_flow_motion_home_tb.u_motion.start_pending',
]
for k in keys:
  print('==', k, '==')
  arr = transitions.get(k, [])
  if not arr:
    print('  (no changes)')
  else:
    for t,v in arr[:100]:
      print(f'  t={t} v={v}')
