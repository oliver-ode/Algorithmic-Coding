import math

cnt = 0

for n in range(1, 101):
    for r in range(1, 101):
        if math.comb(n,r)>1000000:
            cnt+=1
print(cnt)