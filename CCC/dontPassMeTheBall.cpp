#include <iostream>
using namespace std;
int main(){
    int players;
    cin>>players;
    cout<<((players-1)*(players-2)*(players-3))/6<<endl;
}