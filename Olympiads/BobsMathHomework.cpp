#include <iostream>

using namespace std;

long val;
int main(){
  cin>>val;
  long a[val];
  int tots = 0;
  for(long i = 1; i <= val; i++){
    a[i-1] = i;
  }
  long summ = 0;
  for(long l = 0; l < val; l++){
    for(long r = l; r < val; r++){
      summ += a[r];
      if(summ == val) tots++;
      else if(summ > val){
        summ = 0;
        break;
      }
    }
  }
  cout<<tots;
}
