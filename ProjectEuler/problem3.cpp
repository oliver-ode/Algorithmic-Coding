#include <iostream>
#include <vector>
#include <math.h>

int main(){
    long a = 600851475143;
    std::vector<long> v;
    for(long i = 3; i < (long)sqrt(a); i+=2){
        if(a%i==0){
            a/=i;
            v.push_back(i);
        }
    }
    std::cout<<a<<std::endl;
}