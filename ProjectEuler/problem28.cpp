#include "helper.hpp"

int main(){
    int sum = 0;
    // Ulam's spiral
    for(int i = 1; 2*i-1 < 1001; i++){
        sum += 4*i*i-4*i+1;
        sum += 4*i*i-4*i+1+1*2*i;
        sum += 4*i*i-4*i+1+2*2*i;
        sum += 4*i*i-4*i+1+3*2*i;
    }
    sum+=pow(1001,2);
    std::cout<<sum<<std::endl;
}