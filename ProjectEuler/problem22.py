f = open("names.txt", "r")
names = f.read().replace('"',"").split(",")
names.sort()

ssum = 0
for i in range(len(names)):
    hold = 0
    for l in names[i]:
        hold+=ord(l)-64
    ssum+=hold*(i+1)

print(ssum)