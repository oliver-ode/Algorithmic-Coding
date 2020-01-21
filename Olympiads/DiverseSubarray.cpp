#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> vals;
  int n, q;
  cin>>n>>q;
  int a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  int curmax = 0;
  for(int i = 0; i < q; i++){
    //Start
    int curr = 0;
    int _l, _r;
    cin>>_l>>_r;
    for(int l = _l; l <= _r; l++){
      for(int r = _r; r <= _r; r++){
        vals.push_back(a[r]);
        sort(vals.begin(), vals.end());
        auto it = unique(vals.begin(), vals.end());
        bool unique = (it == vals.end());
        if(!unique){
          if(curr>curmax)curmax=curr;
          curr = 0;
          vals.clear();
          break;
        }
        else{
          curr++;
        }
      }
    }
    cout<<curmax<<endl;
    curmax = 0;
  }
}
