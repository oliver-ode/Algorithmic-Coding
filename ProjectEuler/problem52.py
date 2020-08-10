num = 1
nums = []
digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
while True:
    nums.clear()
    pos = True
    nums.append(num)
    for multi in range(2, 7):
        nums.append(num*multi)
    for digit in digits:
        for i in range(0, 5):
            if str(nums[i]).count(str(digit))!=str(nums[i+1]).count(str(digit)):
                pos = False
                break
        if not pos:
            break
    if pos:
        print(num)
        break
    num+=1
