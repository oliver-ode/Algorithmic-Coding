#include <iostream>
#include <cstring>

using namespace std;

bool lst[256][256];
int ll[257][258];
int t = 5;
int main(){
  while(t--){
    int n;
    cin>>n;
    char a_;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin>>a_;
        if(a_=='#') lst[i][j] = true;
        else lst[i][j] = false;
      }
    }
    int count = 0;
    memset(ll,0,sizeof(ll[0][0])*257*258);
    for(int j = n-1; j >= 0; j--){
      for(int i = 0; i < n; i++){
        if(lst[j][i]){
          int min_ = 2^31-1;
          min_ = min(min_, ll[j+1][i+2]);
          min_ = min(min_, ll[j+1][i+1]);
          min_ = min(min_, ll[j+1][i]);
          int height = min_+1;
          ll[j][i+1] = height;
          count += height;
        }
      }
    }
    cout<<count<<endl;
  }
}
