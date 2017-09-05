#!~/anaconda3/bin/python
import numpy as np
with open ('new.txt','w') as f:
 for i in range(0,15):
     system = 0.4+i/100
     print(system)
     f.write(str(system)+'\n')
