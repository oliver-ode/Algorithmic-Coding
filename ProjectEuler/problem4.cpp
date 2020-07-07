#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int maxval = 0;
    for(int num1=100; num1<1000; num1++){
        for(int num2=100; num2<1000; num2++){
            std::string a = std::to_string(num1*num2);
            std::string b = std::to_string(num1*num2);
            std::reverse(b.begin(),b.end());
            if(num1*num2>maxval && a.compare(b)==0) maxval=num1*num2;
        }
    }
    std::cout<<maxval<<std::endl;
}