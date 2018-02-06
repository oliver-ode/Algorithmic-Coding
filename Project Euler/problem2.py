num1 = 1
num2 = 1
lst = []
while num1 < 4000000 and num2 < 4000000:
    holder = num2
    num2 = num1 + num2
    num1 = holder
    if num1 % 2 == 0:
        lst.append(num1)
    elif num2 % 2 == 0:
        lst.append(num2)
print(sum(set(lst)))