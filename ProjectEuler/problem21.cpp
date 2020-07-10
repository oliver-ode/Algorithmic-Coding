#include "helper.hpp"

int amicable(int n){
    int s = 0;
    for(int k = 1; k < n; k++){
        if(n%k==0)s+=k;
    }
    return s;
}

bool isAmicable(std::vector<int> &v, int a){
    if(v.at(a)<=10000) return v.at(v.at(a))==a&&v.at(a)!=a;
    return false;
}

int main(){
    std::vector<int> nums;
    nums.push_back(0);
    for(int i = 1; i <= 10000; i++){
        nums.push_back(amicable(i));
    }
    int sum = 0;
    for(int i = 1; i <= 10000; i++){
        if(isAmicable(nums, i)) sum+=i;
    }
    std::cout<<sum<<std::endl;
}