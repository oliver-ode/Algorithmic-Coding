#include <iostream>
#include <string.h>
using namespace std;
int N, tot, half, k[101], v[101], cnt[5000001]; bool dp[5000001];

int main(){
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d %d", &k[i], &v[i]); tot+=k[i]*v[i];
  }
  half = tot/2; dp[0] = true;
  for(int i=1; i<=N; i++){
    memset(cnt, 0, sizeof(cnt));
    for(int j=v[i]; i<=half; j++){
      if(dp[j]) continue;
      if(dp[j-v[i]] && cnt[j-v[i]] + 1 <= k[i]){
        dp[j] = true; cnt[j] = cnt[j-v[i]]+1;
      }
    }
  }
  int best = half;
  while(!dp[best]) best--;
  printf("%d\n", abs(best-(tot-best)));
}
