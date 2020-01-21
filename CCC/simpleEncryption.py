keyShift = []
keyArray = []
keyArrayMulti = []
keyShiftStr = input().upper()
keyArrayStr = input().upper()
curShifter = 0
alphabet = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
endWord = ""
#Creating the lists and removing non letters
for i in range(len(keyShiftStr)):
    keyShift.append(keyShiftStr[i])
for i in range(len(keyShift)-1, -1, -1):
    if keyShift[i] not in alphabet:
        keyShift.pop(i)
for i in range(len(keyArrayStr)):
    keyArray.append(keyArrayStr[i])
for i in range(len(keyArray)-1, -1, -1):
    if keyArray[i] not in alphabet:
        keyArray.pop(i)
#Turns the code letters into numbers(amount to change letter by) - B:1 C:2 etc...
for i in range(len(keyShift)):
    keyShift[i] = alphabet.index(keyShift[i])
#Turns the sentence letters into numbers ^^^
for i in range(len(keyArray)):
    keyArray[i] = alphabet.index(keyArray[i])
#Makes the 2D array
for i in range(0, len(keyArray), len(keyShift)):
    keyArrayMulti.append(keyArray[i:i+len(keyShift)])
#Checks to see what the letter is and how much it needs to be shifted by
for x in range(len(keyArrayMulti)):
    for y in range(len(keyArrayMulti[x])):
        curShifter = keyShift[y]
        keyArrayMulti[x][y] += curShifter
#Turns the numbers into letters for the sentence
for x in range(len(keyArrayMulti)):
    for y in range(len(keyArrayMulti[x])):
        if keyArrayMulti[x][y] >= 26:
            keyArrayMulti[x][y] = keyArrayMulti[x][y] - 26
        if keyArrayMulti[x][y] >= 26:
            keyArrayMulti[x][y] = keyArrayMulti[x][y] - 26
        keyArrayMulti[x][y] = alphabet[keyArrayMulti[x][y]]
#Prints out the final number
for x in range(len(keyArrayMulti)):
    for y in range(len(keyArrayMulti[x])):
        endWord = endWord + keyArrayMulti[x][y]
print(endWord)