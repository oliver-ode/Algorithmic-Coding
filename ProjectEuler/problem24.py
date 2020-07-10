from itertools import permutations

perm = permutations([0,1,2,3,4,5,6,7,8,9])
lst = list(perm)
lst.sort()
print(lst[999999])