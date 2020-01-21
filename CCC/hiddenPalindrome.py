longPally = []
kst = []
lst = []
length = 0
word = input()

for i in range(0, len(word) - 1):
    for l in range(1, len(word) + 1):
        ist = word[i:l]
        kst = word[i:l]
        ist = ist[::-1]
        if kst == ist:
            if len(ist) > len(longPally):
                longPally = ist

length = len(longPally)
print(length)