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
    long cur = 1;
    uint64_t tot = 2;
    while(cur<2000000){
        cur+=2;
        if(isPrime(cur))tot+=cur;
    }
    std::cout<<tot<<std::endl;
}