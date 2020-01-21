#include <iostream>

using namespace std;
int N; long long dp[1000001];
long long solve(int n){
  if(dp[n] != 0) return dp[n];
  if(n==1 || n == 2) return dp[n] = 1;
  for(int k = 2; k <= n; k++)
    dp[n] += solve(n/k);
  return dp[n];
}

int main(){
  cin>>N;
  cout<<solve(N)<<endl;
}
