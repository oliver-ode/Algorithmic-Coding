numOfComputers = int(input())
computers = []
maxValue1 = 0
maxValue2 = 0
maxValueStr1 = ""
maxValueStr2 = ""
edgeNow = False
def computeValue(r, s, d):
    return r*2 + s*3 + d
for i in range(numOfComputers):
    computers.append(input().split())
    computers[i][1] = int(computers[i][1])
    computers[i][2] = int(computers[i][2])
    computers[i][3] = int(computers[i][3])
    if computers[i][0] == "THISONETOO":
        edgeNow = True
    if computeValue(computers[i][1], computers[i][2], computers[i][3]) >= maxValue1:
        if computeValue(computers[i][1], computers[i][2], computers[i][3]) == maxValue1:
            if computers[i][0] < maxValueStr1:
                maxValue2 = maxValue1
                maxValueStr2 = maxValueStr1
                maxValue1 = computeValue(computers[i][1], computers[i][2], computers[i][3])
                maxValueStr1 = computers[i][0]
        else:
            maxValue2 = maxValue1
            maxValueStr2 = maxValueStr1
            maxValue1 = computeValue(computers[i][1], computers[i][2], computers[i][3])
            maxValueStr1 = computers[i][0]
    elif computeValue(computers[i][1], computers[i][2], computers[i][3]) > maxValue2:
        maxValue2 = computeValue(computers[i][1], computers[i][2], computers[i][3])
        maxValueStr2 = computers[i][0]
print(maxValueStr1)
if edgeNow:
    print("THISONETOO")
else:
    print(maxValueStr2)