#include <iostream>

using namespace std;

int main(){
  int n, k, r;
  cin>>n;
  cin>>k;
  cin>>r;
  bool houses[n+1];
  for(int i = 0; i <= n+1; i++){
    houses[i] = false;
  }
  int left = 1, right = r;
  int h;
  for(int i = 0; i < k; i++){
    cin>>h;
    houses[h] = true;
  }
  int cams = 0;
  for(int i = 1; i <= right; i++){
    if(houses[i]) cams++;
  }
  int tot = 0;

  if(cams==0){
    houses[right] = true;
    houses[right-1] = true;
  }

  for(; right <= n; right++, left++){
    cout<<"Left:"<<left<<", Right:"<<right<<endl;
    if(cams == 1) {
      houses[right] = true;
      tot++;
      cams++;
    }
    if(houses[left]) cams--;
    if(houses[right+1]) cams++;
  }
  cout<<tot;
}
