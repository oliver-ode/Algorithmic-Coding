isbnStart = "9780921418"
rest1 = input()
rest2 = input()
rest3 = input()
isbn = isbnStart + rest1 + rest2 + rest3
sum = 0
for i in range(0, len(isbn)-1, 2):
    sum += int(isbn[i])
    sum += int(isbn[i+1]) * 3
sum += int(isbn[12])
print("The 1-3-sum is  " + str(sum))
