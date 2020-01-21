time = int(input())
holder = 0
final = 0

print(time, "in Ottawa")

if time - 300 >= 0:
    print(time - 300, "in Victoria")
else:
    holder = time - 300 + 41
    holder *= -1
    final = 2359 - holder
    print(final, "in Victoria")

if time - 200 >= 0:
    print(time - 200, "in Edmonton")
else:
    holder = time - 200 + 41
    holder *= -1
    final = 2359 - holder
    print(final, "in Edmonton")

if time - 100 >= 0:
    print(time - 100, "in Winnipeg")
else:
    holder = time - 100 + 41
    holder *= -1
    final = 2359 - holder
    print(final, "in Winnipeg")

print(time, "in Toronto")

if time + 100 <= 2359:
    print(time + 100, "in Halifax")
else:
    holder = time + 100
    holder -= 2359
    print(holder, "in Halifax")

if time == 145:
    print("315 in St. John's")
elif time + 130 <= 2359:
    print(time + 130, "in St. John's")
else:
    holder = time + 130
    holder -= 2359
    print(holder, "in St. John's")