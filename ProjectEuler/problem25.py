val1 = 1
val2 = 1
indx = 1
while(len(str(val1))<1000):
    hold=val1
    val1=val2
    val2=val1+hold
    indx+=1
print(val1)
print(indx)