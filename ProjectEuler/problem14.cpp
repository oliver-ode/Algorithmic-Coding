#include <iostream>

typedef uint64_t intt;

intt collatz(int i){
    intt cur = i, len = 0;
    while(cur!=1){
        if(cur%2==0)cur/=2;
        else cur=cur*3+1;
        len++;
    }
    return len;
}

int main(){
    intt curMax = 0;
    for(int i = 1; i <= 1000000; i++){
        if(collatz(i)>curMax){
            curMax=collatz(i);
            std::cout<<i<<" -> "<<collatz(i)<<std::endl;
        }
    }
    std::cout<<collatz(curMax)<<std::endl;
}