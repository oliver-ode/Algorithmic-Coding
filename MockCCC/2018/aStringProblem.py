msg = input()
lst = []
alpha = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
for letter in msg:
    lst.append(letter)
lst.sort()
max1 = 0
max2 = 0
for ltr in alpha:
    if lst.count(ltr) > max1:
        max2 = max1
        max1 = lst.count(ltr)
    elif lst.count(ltr) > max2:
        max2 = lst.count(ltr)
print(len(lst)-max1-max2)