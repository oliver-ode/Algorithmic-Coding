#include <iostream>

int main(){
    long a=0, num1=1, num2=1;
    while (num2<4000000){
        long holder = num2;
        num2 = num1+num2;
        num1=holder;
        if(num2%2==0)a+=num2;
    }
    std::cout<<a<<std::endl;
}