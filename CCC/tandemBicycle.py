typeOfQuestion = int(input())
N = int(input())
Dmojistan = input().split(" ")
Pegland = input().split(" ")
total = 0

for i in range(0, N):
    Dmojistan[i] = int(Dmojistan[i])
    Pegland[i] = int(Pegland[i])

Dmojistan.sort()
Pegland.sort()
if typeOfQuestion == 2:
    Pegland.reverse()

for i in range(0, N):
    if Dmojistan[i] < Pegland[i]:
        total += Pegland[i]
    else:
        total += Dmojistan[i]
print (total)