nums = int(input())
lst = []
kst = []
for i in range(nums): #Input
    lst.append(input().split())
#print(lst)
for i in range(nums): #Checking the list subsets
    lst[i].sort()
    kst.append(lst[i][int(nums/2)])
kst.sort()
#print(lst)
#print(kst)
print(int(kst[int(nums/2)]))
