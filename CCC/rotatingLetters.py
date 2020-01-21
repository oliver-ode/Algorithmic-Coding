word = input()
correctLetter = ("IOSHZXN")
answer = ("YES")

for letter in word:
    if letter not in correctLetter:
        answer = "NO"
print (answer)