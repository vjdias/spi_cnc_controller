import sys, re, os
vcd_path = r'tb/tests/temp/spi_full_flow_motion_early_end_tb.vcd'

want = set([
  'spi_full_flow_motion_early_end_tb.rst_n',
  'spi_full_flow_motion_early_end_tb.step_count_x',
  'spi_full_flow_motion_early_end_tb.inq',
  'spi_full_flow_motion_early_end_tb.slave_busy',
  'spi_full_flow_motion_early_end_tb.u_cons.frame_valid',
  'spi_full_flow_motion_early_end_tb.u_cons.out_msgType',
  'spi_full_flow_motion_early_end_tb.u_motion.move_enabled',
  'spi_full_flow_motion_early_end_tb.u_motion.move_end_pulse',
  'spi_full_flow_motion_early_end_tb.u_motion.tick',
  'spi_full_flow_motion_early_end_tb.u_motion.start_x',
  'spi_full_flow_motion_early_end_tb.u_motion.cont_x',
  'spi_full_flow_motion_early_end_tb.u_motion.dir_mask',
  'spi_full_flow_motion_early_end_tb.tmc_enn_x',
  'spi_full_flow_motion_early_end_tb.tmc_step_x',
])

ids = {}
scopes=[]
with open(vcd_path, 'r', errors='ignore') as f:
  for line in f:
    if line.startswith('$scope'):
      scopes.append(line.split()[2])
    elif line.startswith('$upscope'):
      if scopes: scopes.pop()
    elif line.startswith('$var'):
      parts = line.strip().split()
      if len(parts)>=5:
        ids[parts[3]] = '.'.join(scopes + [parts[4]])
    elif line.startswith('$enddefinitions'):
      break

rev = {idc:name for idc,name in ids.items() if name in want}
vals = {}
trans = {name: [] for name in want}
cur_t = 0
with open(vcd_path, 'r', errors='ignore') as f:
  passed=False
  for line in f:
    if not passed:
      if line.startswith('$enddefinitions'): passed=True
      continue
    if line.startswith('#'):
      try: cur_t = int(line[1:].strip())
      except: pass
      continue
    if not line: continue
    c=line[0]
    if c in '01xzXZ':
      idc = line[1:].strip()
      if idc in rev:
        name = rev[idc]
        v = c
        if vals.get(name) != v:
          vals[name]=v; trans[name].append((cur_t,v))
    elif c=='b':
      parts=line.strip().split()
      if len(parts)==2:
        bits = parts[0][1:]; idc=parts[1]
        if idc in rev:
          name=rev[idc]; v=bits
          if vals.get(name)!=v:
            vals[name]=v; trans[name].append((cur_t,v))

for k in [
  'spi_full_flow_motion_early_end_tb.step_count_x',
  'spi_full_flow_motion_early_end_tb.slave_busy',
  'spi_full_flow_motion_early_end_tb.u_cons.frame_valid',
  'spi_full_flow_motion_early_end_tb.u_cons.out_msgType',
  'spi_full_flow_motion_early_end_tb.u_motion.move_enabled',
  'spi_full_flow_motion_early_end_tb.u_motion.move_end_pulse',
  'spi_full_flow_motion_early_end_tb.u_motion.tick',
  'spi_full_flow_motion_early_end_tb.tmc_enn_x',
  'spi_full_flow_motion_early_end_tb.tmc_step_x',
]:
  print('==',k)
  for t,v in trans.get(k, [])[:80]:
    print(' t=',t,' v=',v)
