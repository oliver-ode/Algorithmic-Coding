from datetime import date
n = int(input())
electionDate = date(2007,2,27)
for p in range(n):
    [year,month,day] = input().split()
    birthDate = date(int(year),int(month),int(day))
    dateDelta = electionDate-birthDate
    #print(dateDelta.days/365.2)
    print("Yes") if dateDelta.days/365.2>=18 else print("No")