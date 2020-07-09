import math
num = math.pow(2, 1000)
s = str(int(num))
ssum = 0
for i in s:
    ssum+=int(i)
print(ssum)