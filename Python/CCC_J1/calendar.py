dates = input()
date = dates.split(" ")
startingDay = int(date[0])
maxDays = int(date[1])
dayNum = 1
print("Sun Mon Tue Wed Thr Fri Sat")

for i in range(startingDay-1):
    print("%3s"%(" "), end = " ")
for i in range(maxDays):
    startingDay += 1
    print("%3d"%(dayNum), end = " ")
    if startingDay == 8:
        print()
        startingDay = 1
    dayNum += 1
