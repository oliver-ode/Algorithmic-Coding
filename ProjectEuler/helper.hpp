#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <cstring>
#include <algorithm>
#include <bitset>

typedef uint64_t lint; //Large int

bool isPrime(long n){
    if(n==2)return true;
    if(n%2==0||n==1||n==0)return false;
    for(int i = 3; i <= (long)std::sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    return true;
}