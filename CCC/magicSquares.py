row1 = input()
row1lst = []
row1lst = row1.split(" ")
row2 = input()
row2lst = []
row2lst = row2.split(" ")
row3 = input()
row3lst = []
row3lst = row3.split(" ")
row4 = input()
row4lst = []
row4lst = row4.split(" ")
totForTopRow = 0
num1 = row1lst[0]
num2 = row1lst[1]
num3 = row1lst[2]
num4 = row1lst[3]
magic = False
totForTopRow = int(num1) + int(num2) + int(num3) + int(num4)

if totForTopRow == int(row2lst[0]) + int(row2lst[1]) + int(row2lst[2]) + int(row2lst[3]):
    if totForTopRow == int(row3lst[0]) + int(row3lst[1]) + int(row3lst[2]) + int(row3lst[3]):
        if totForTopRow == int(row4lst[0]) + int(row4lst[1]) + int(row4lst[2]) + int(row4lst[3]):
            if totForTopRow == int(row1lst[0]) + int(row2lst[0]) + int(row3lst[0]) + int(row4lst[0]):
                if totForTopRow == int(row1lst[1]) + int(row2lst[1]) + int(row3lst[1]) + int(row4lst[1]):
                    if totForTopRow == int(row1lst[2]) + int(row2lst[2]) + int(row3lst[2]) + int(row4lst[2]):
                        if totForTopRow == int(row1lst[3]) + int(row2lst[3]) + int(row3lst[3]) + int(row4lst[3]):
                            magic = True

if magic == True:
    print("magic")
else:
    print("not magic")