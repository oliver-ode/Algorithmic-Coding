#include <iostream>

int main(){
    long a = 20;
    while(a%11!=0||a%12!=0||a%13!=0||a%14!=0||a%15!=0||a%16!=0||a%17!=0||a%18!=0||a%19!=0)a+=20;
    std::cout<<a<<std::endl;
}