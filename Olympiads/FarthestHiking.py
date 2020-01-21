vals = input().split(" ")
time = int(vals[0])
length = int(vals[1])
upt = int(vals[2])
flatt = int(vals[3])
downt = int(vals[4])

moves = input()
lst = []
for i in moves:
    lst.append(i)

count = 0

def calcTime(direc):
    if direc == 'u':
        return upt
    elif direc == 'f':
        return flatt
    elif direc == 'd':
        return downt

t=0
gud = True
for i in range(length):
    if gud:
        if moves[i] == 'f':
            t += calcTime(moves[i])*2
        else:
            t += calcTime('u') + calcTime('d')

        if t > time:
            print(count)
            gud = False
        else:
            count += 1
        
        
