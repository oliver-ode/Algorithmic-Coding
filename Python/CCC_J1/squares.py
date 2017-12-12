num = int(input())
trial = 1
side = 1
holder = 0
period = "."

while True:
    holder = trial * trial
    if holder <= num:
        side = trial
        trial += 1
    else:
        stupid = str(side) + str(period)
        print("The largest square has side length " + str(side) + ".")
        break