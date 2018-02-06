numOfSensors = int(input())
lst = [0]*1000
for i in range(numOfSensors):
    lst[int(input())-1] += 1
print(lst)