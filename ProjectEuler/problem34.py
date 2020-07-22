from math import factorial as fact
ssum = 0
for i in range(10, 1000000):
    v = 0
    for digit in str(i):
        v += fact(int(digit))
    if v == i:
        ssum+=i
print(ssum)