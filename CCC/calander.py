dates = input()
date = dates.split(" ")
startingDay = int(date[0])
maxDays = int(date[1])
dayNum = 1
print("Sun Mon Tue Wed Thr Fri Sat")

def spacing(num):
    if num <= startingDay-2:
        print("%3s" % (" "), end=" ")
        spacing(num+1)
def calanderPrint(dayNum, startingDay):
    if dayNum <= maxDays:
        startingDay += 1
        if startingDay == 8:
            print("%3d" % (dayNum), end="")
        elif maxDays == dayNum:
            print("%3d" % (dayNum), end="")
            print()
        else:
            print("%3d" % (dayNum), end=" ")
        if startingDay == 8:
            print()
            startingDay = 1
        dayNum += 1
        calanderPrint(dayNum, startingDay)

spacing(0)
calanderPrint(dayNum, startingDay)
