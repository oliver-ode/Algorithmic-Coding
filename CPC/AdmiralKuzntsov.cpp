#include <iostream>
#include <string.h>
using namespace std;
const int MM = 1e6+3;
int N, dp[MM], pa[MM], pb[MM]; char a[MM], b[MM];
int main(){
	scanf("%d %s %s", &N, a+1, b+1);
	for(int i=1; i<=N; i++){
		pa[i] = pa[i-1] + (a[i]=='0');
		pb[i] = pb[i-1] + (b[i]=='1');
	}
	memset(dp, 0x3f, sizeof(dp)); dp[0] = 0;
	for(int i=1; i<=N; i++){
		if(a[i] == b[i]) dp[i] = min(dp[i], dp[i-1]);
		else if(a[i]=='0' && b[i]=='1') dp[i] = min(dp[i], dp[i-1]+1);
		dp[i+2] = min(dp[i+2], dp[i-1]+1+pa[i+2]-pa[i-1]+pb[i+2]-pb[i-1]);
		dp[i+3] = min(dp[i+3], dp[i-1]+1+pa[i+3]-pa[i-1]+pb[i+3]-pb[i-1]);
		dp[i+4] = min(dp[i+4], dp[i-1]+3+pa[i+4]-pa[i-1]+pb[i+4]-pb[i-1]);
	}
	printf("%d\n", dp[N]);
}
