#include <iostream>
#include <math.h>

bool isPrime(long n){
    for(int i = 3; i <= (long)std::sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    // std::cout<<n<<std::endl;
    return true;
}

int main(){
    int cnt = 1; //2 exists
    long cur = 1;
    while(cnt<10001){
        cur+=2;
        if(isPrime(cur))cnt++;
    }
    std::cout<<cur<<std::endl;
}