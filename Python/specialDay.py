month = int(input())
day = int(input())
if month == 1:
    print("Before")
elif month >= 3:
    print("After")
elif day <= 17:
    print("Before")
elif day >= 19:
    print("After")
else:
    print("Special")