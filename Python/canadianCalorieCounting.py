choices = []
totCals = 0
for i in range(4):
    choices.append(int(input()))
if choices[0] == 1:
    totCals += 461
elif choices[0] == 2:
    totCals += 431
elif choices[0] == 3:
    totCals += 420
if choices[1] == 1:
    totCals += 100
elif choices[1] == 2:
    totCals += 57
elif choices[1] == 3:
    totCals += 70
if choices[2] == 1:
    totCals += 130
elif choices[2] == 2:
    totCals += 160
elif choices[2] == 3:
    totCals += 118
if choices[3] == 1:
    totCals += 167
elif choices[3] == 2:
    totCals += 266
elif choices[3] == 3:
    totCals += 75
print("Your total Calorie count is " + str(totCals) + ".")