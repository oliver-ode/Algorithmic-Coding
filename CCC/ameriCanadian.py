word = input()
vowel = ["a", "e", "i", "o", "u", "y"]

while word != "quit!":
    if len(word) > 4 and word[-3] not in vowel and "or" in word:
        print (word[0:len(word)-2] + 'our')
    else:
        print (word)
    word = input()