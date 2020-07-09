dp=[[0]*21 for _ in range(21)]
dp[0][0]=1

for y in range(21):
    for x in range(21):
        if y>0:
            dp[y][x]+=dp[y-1][x]
        if x>0:
            dp[y][x]+=dp[y][x-1]
print(dp[20][20])