fact = 1
for i in range(2, 101):
    fact*=i
s = str(fact)
ssum = 0
for i in s:
    ssum+=int(i)
print(ssum)