#include <iostream>

using namespace std;

const int MAX = 1025;

int n, in, val1, val2, val3, val4, bit[MAX][MAX];

void a(int x, int y, int z){
  for(int _x = x; _x <= n; _x += _x & -_x){
    for(int _y = y; _y <= n; _y += _y & -_y){
      bit[_x][_y] += z;
    }
  }
}
int s(int x, int y){
  int _s = 0;
  for(int _x = x; _x > 0; _x -= _x & -_x){
    for(int _y = y; _y > 0; _y -= _y & -_y){
      _s += bit[_x][_y];
    }
  }
  return(_s);
}

int main(){
  cin>>in;

  while(in != 3){
    if(in == 0){
      cin>>n;
    }
    else if(in == 1){
      cin>>val1>>val2>>val3;
      val1++; val2++;

      a(val1, val2, val3);
    }
    else if(in == 2){
      cin>>val1>>val2>>val3>>val4;
      val1++; val2++; val3++; val4++;
      cout<<s(val3, val4)+s(val1-1, val2-1)-s(val1-1, val4)-s(val3, val2-1)<<endl;
    }
    cin>>in;
  }
}
