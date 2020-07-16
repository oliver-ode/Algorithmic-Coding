//2019 S5

#include <iostream>

using namespace std;
int a[3002][3002];
int nxt, cur;
long long ans = 0;
int main(){
  int N, K;
  cin>>N>>K;
  for(int i = 1; i <= N; i++){
    for(int k = 1; k <= i; k++){
      cin>>a[i][k];
    }
  }
  for(cur = 1, nxt = 2; nxt<= K; cur = nxt, nxt =1.5*cur){
    int d = nxt - cur;
    for(int i = 1; i <= N-nxt+1; i++){
      for(int j =1; j <= i; j++){
        a[i][j] = max(a[i][j], max(a[i+d][j], a[i+d][j+d]));
      }
    }
  }
  int d = K - cur;
  for(int i = 1; i <= N-K+1; i++){
    for(int j = 1; j <= i; j++){
      ans += max(a[i][j], max(a[i+d][j], a[i+d][j]));
    }
  }
  cout<<ans;

}
