#include "helper.hpp"

int main(){
    int curBest = 0, prod = 0;
    for(int a = -1000; a <= 1000; a++){
        for(int b = -1000; b <= 1000; b++){
            int n = 0;
            while(isPrime(std::abs((n*n)+(a*n)+b))) n++;
            if(n>curBest){
                curBest=n;
                prod=a*b;
            }
        }
    }
    std::cout<<curBest<<std::endl;
    std::cout<<prod<<std::endl;
}