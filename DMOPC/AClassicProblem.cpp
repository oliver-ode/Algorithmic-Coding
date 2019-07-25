#include <iostream>
#include <deque>

using namespace std;

int main(){
  int N, K;
  long ans = 0;
  cin>>N;
  cin>>K;
  int a [N];
  for(int i = 0; i < N; i++){
    cin>>a[i];
  }
  deque<int> mx;
  deque<int> mi;
  for(int i = 0, j = 0; j<N; j++){ //i is left pointer and j is right pointer
    while(!mx.empty() && mx.back() < a[j]) mx.pop_back();
    while(!mi.empty() && mi.back() > a[j]) mi.pop_back();

    mx.push_back(a[j]);
    mi.push_back(a[j]);

    while(mx.front() - mi.front() > K){
      if(mx.front() == a[i]) mx.pop_front();
      if(mi.front() == a[i]) mi.pop_front();
      i++;
    }

    ans += j-i+1;
  }
  cout<<ans;
}
