import math

lst = []
for i in range(1, int(math.sqrt(600851475143))):
    if 600851475143 % i == 0:
        lst.append(i)
print(lst[-1])
