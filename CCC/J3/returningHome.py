lst = []
kst = []
direction = input()

while direction != "SCHOOL":
    kst.append(direction)
    direction = input()
kst.append("SCHOOL")
lst = kst[::-1]

lst.remove("SCHOOL")

for i in range(len(lst)):
    if lst[i] == "L":
        lst[i] = "RIGHT"
    elif lst[i] == "R":
        lst[i] = "LEFT"

for i in range(0, len(lst) - 1, 2):
    print("Turn", lst[i], "onto", lst[i + 1], "street.")
print("Turn", lst[-1], "into your HOME.")