numOfVillages = int(input())
villages = []
for i in range(numOfVillages):
    villages.append(int(input()))
villages.sort()

# Logic
# abs((10-4))/2 + abs((0-4))/2 == 3
lowest = 10000000000
for i in range(1, len(villages)-1):
    if abs(villages[i+1]-villages[i])/2 + abs(villages[i-1]-villages[i])/2 < lowest:
        lowest = abs(villages[i+1]-villages[i])/2 + abs(villages[i-1]-villages[i])/2
lowestStr = str(lowest)
decimal = lowestStr.index(".")
print(float(lowestStr[0:decimal+2]))
