//Subtask

#include <iostream>

using namespace std;

typedef long long ll;
const int MM = 1e6+3, LOG = 21;
int N, K, mx[LOG][MM]; ll dp[MM], ans = 0;

int rmq(int x, int y){
  if(x > y) return (0);
  int lvl = log2(y-x+1);
  return max(mx[lvl][x], mx[lvl][y-(1<<lvl)+1]);
}

int main(){
  cin>>N>>K;
  for(int i = 1; i <= N; i++){
    cin>>mx[0][i];
  }
  for(int i = 1; i <= LOG; i++){
    for(int j = 1; j+(1<<i)-1 <= N; j++){
      mx[i][j] = max(mx[i-1][j], mx[i-1][j+(1<<(i-1))]);
    }
  }
  if (2*K >= N){ //Subtask 1
    if(K==N) ans=rmq(1, N);
    else{
      for(int i = N-K; i <= K; i++){
        ans = max(ans, (ll)rmq(1, i) + rmq(i+1, N));
      }
    }
  }
  else{ //Subtask 2
    for(int i = 1; i <= N; i++){
      for(int j = max(0, i-K); j<=((i+K-1)/K - 1) * K; j++){
        dp[i] = max(dp[i], dp[j] + rmq(j+1, i));
      }
    }
    ans = dp[N];
  }
  cout<<ans;
}
