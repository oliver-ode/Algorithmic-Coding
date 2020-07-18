ssum = 0
for num in range(11, 1000000):
    s = str(num)
    curSum = 0
    for l in s:
        curSum+=int(l)**5
    if curSum==num:
        ssum+=curSum
        #print(curSum)
print(ssum)