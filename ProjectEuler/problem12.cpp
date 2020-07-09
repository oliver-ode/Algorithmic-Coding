#include <iostream>
#include <vector>
#include <math.h>

typedef uint64_t intt;

int checkDiv(intt n){
    intt cnt = 0;
    for(int k = 1; k <= (intt)std::sqrt(n); k++){
        if(n%k==0){
            if(n/k==k) cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}

int main(){
    std::vector<intt> v;
    intt cur = 0;
    for(intt i = 1; i <= 1000000; i++){
        cur+=i;
        v.push_back(cur);
    }

    intt curBest;
    for(intt i = 0; i < v.size(); i++){
        if(checkDiv(v.at(i))>curBest){
            curBest=checkDiv(v.at(i));
            std::cout<<v.at(i)<<" -> "<<curBest<<std::endl;
            if(curBest>=500){
                std::cout<<v.at(i)<<std::endl;
                return 0;
            }
        }
    }
}