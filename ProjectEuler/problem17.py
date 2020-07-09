HUNDRED = 7
THOUSAND = 8
AND = 3

nums = [0]*1010
nums[1]=3
nums[2]=3
nums[3]=5
nums[4]=4
nums[5]=4
nums[6]=3
nums[7]=5
nums[8]=5
nums[9]=4
nums[10]=3
nums[11]=6
nums[12]=6
nums[13]=8
nums[14]=8
nums[15]=7
nums[16]=7
nums[17]=9
nums[18]=8
nums[19]=8
nums[20]=6
nums[30]=6
nums[40]=5
nums[50]=5
nums[60]=5
nums[70]=7
nums[80]=6
nums[90]=6
nums[100]=7
nums[1000]=8

def count(num):
    if num<20:
        return nums[num]
    elif num<100:
        return nums[int(num/10)*10] + count(num%10)
    elif num<1000 and num%100==0:
        return nums[int(num/100)] + HUNDRED
    elif num<1000:
        return nums[int(num/100)] + HUNDRED + AND + count(num%100)
    elif num==1000:
        return nums[1] + THOUSAND

curS = 0
for i in range(1, 1001):
    curS+=count(i)
print(curS)