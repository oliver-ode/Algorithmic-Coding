#include <iostream>

using namespace std;

int N, v;
long long maxLen, maxCount; long long lengths[2002], sums[4004];
int main(){
  cin>>N;
  for(int i = 0; i < N; i++){
    cin>>v;
    lengths[v] ++;
  }
  for(int first = 1; first <= 2000; first++){
    if(lengths[first] != 0){
      for(int last = first; last <= 2000; last++){
        if(first == last){
          sums[first+last] += lengths[first]/2;
        }
        else if(lengths[last] != 0){
          sums[first+last] += min(lengths[first], lengths[last]);
        }
      }
    }
  }
  for(int i = 1; i <= 4000; i++){
    if(sums[i] > maxLen){
      maxLen = sums[i];
      maxCount = 1;
    }
    else if(sums[i] == maxLen){
      maxCount++;
    }
  }
  cout<<maxLen<<" "<<maxCount<<endl;
}
