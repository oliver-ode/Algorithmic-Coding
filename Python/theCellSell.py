daytimeMins = int(input())
eveningMins = int(input())
weekendMins = int(input())
aPrice = 0
bPrice = 0
#A
if daytimeMins >= 100:
    aPrice += 0.25 * (daytimeMins-100)
aPrice += eveningMins*0.15
aPrice += weekendMins*0.20
#B
if daytimeMins >= 250:
    bPrice += 0.45 * (daytimeMins - 250)
bPrice += eveningMins*0.35
bPrice += weekendMins*0.25
print("Plan A costs " + str(round(aPrice, 2)))
print("Plan B costs " + str(round(bPrice, 2)))
if aPrice < bPrice:
    print("Plan A is cheapest.")
elif bPrice < aPrice:
    print("Plan B is cheapest.")
else:
    print("Plan A and B are the same price.")