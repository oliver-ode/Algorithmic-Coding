#include "helper.hpp"

bool abundant(int n){
    int s = 0;
    for(int k = 1; k < n; k++){
        if(n%k==0)s+=k;
    }
    return s>n;
}

int main(){
    std::vector<int> v;
    for(int i = 1; i < 30000; i++){
        if(abundant(i)) {
            v.push_back(i);
        }
    }
    int s = 0;
    bool possibs[30000];
    std::fill(std::begin(possibs), std::end(possibs), true);
    for(int v1 = 0; v1 < v.size(); v1++){
        for(int v2 = v1; v2 < v.size(); v2++){
            if(v.at(v1)+v.at(v2)<30000)possibs[v.at(v1)+v.at(v2)]=false;
        }
    }
    for(int i = 1; i < 29000; i++){
        if(possibs[i])s+=i;
    }
    std::cout<<s<<std::endl;
}