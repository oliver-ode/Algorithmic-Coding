from itertools import permutations

perm = permutations([0,1,2,3,4,5,6,7,8,9])
lst = list(perm)

div = [2, 3, 5, 7, 11, 13, 17]

ssum=0

for num in lst:
    s = "".join(str(v) for v in num)

    divvy = True

    for i in range(1, 8):
        if(100*int(s[i])+10*int(s[i+1])+int(s[i+2]))%div[i-1] != 0:
            divvy = False
            break
    if divvy:
        ssum += int(s)
    
print(ssum)