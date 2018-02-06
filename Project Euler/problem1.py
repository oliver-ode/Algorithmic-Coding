lst = []
for i in range(0, 1000, 3):
    lst.append(i)
for i in range(0, 1000, 5):
    lst.append(i)
print(sum(set(lst)))