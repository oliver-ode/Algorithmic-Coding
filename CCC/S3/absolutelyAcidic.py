numOfSensors = int(input())
lst = [0]*1000
for i in range(numOfSensors):
    lst[int(input())-1] += 1
highestFreqIndx = max(lst)
highestFrequency = lst.index(highestFreqIndx)+1
print(highestFrequency)
print(highestFreqIndx)

totalAtMax = 0
for i in lst:
    if i == highestFrequency:
        pass