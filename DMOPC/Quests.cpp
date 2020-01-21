#include <iostream>

using namespace std;

typedef long long ll;
ll dp[2][5002];
int N, H;
int main(){
  cin>>N>>H;
  int g, h, q, t;
  for(int i = 1, pre=0, cur=1; i <= N; i++){
    //Visit: g gold, h hours (1 time)
    //Quest: q gold, t hours (unlimited)
    cin>>g>>h>>q>>t;
    memset(dp[cur], 0, sizeof(dp[cur]));
    for(int j=h; j<=H; j++) dp[cur][j] = dp[pre][j-h] + g;
    for(int j=h; j+t <= H; j++){ //01
      dp[cur][j+t] = max(dp[cur][j+t], dp[cur][j] + q);
    }
    for(int j=1; j<=H; j++){ //Unlimited
      dp[cur][j] = max(dp[cur][j], dp[pre][j]);
    }
    swap(pre, cur);
  }
  cout<<dp[N&1][H]<<endl;
}
