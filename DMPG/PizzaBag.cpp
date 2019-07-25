#include <iostream>
#include <deque>

using namespace std;

int main(){
  int N, K;
  cin>>N;
  cin>>K;
  int psa[N*2+1];
  psa[0] = 0;
  for(int i = 1; i < N+1; i++){
    cin>>psa[i];
    psa[i+N] = psa[i];
  }
  deque<int> mi;
  long long ans = -1000000000000000;
  mi.push_back(0);
  for(int L = 0, R = 1; R<=2*N+1; R++){
    psa[R] += psa[R-1];
    while(!mi.empty() && mi.back() > psa[R]) mi.pop_back();
    mi.push_back(psa[R]);
    while(L<R-K){
      if(mi.front() == psa[L]) mi.pop_front();
      L++;
    }
    if(psa[R]-mi.front()>ans) ans = psa[R]-mi.front();
  }
  cout<<ans;
}
