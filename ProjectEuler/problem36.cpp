#include "helper.hpp"

std::string binString = "";

std::string bin(unsigned n) { 
    std::string out = "", finall = "";
    out = std::bitset<30>(n).to_string();
    int indx = out.find("1");
    finall = out.substr(indx, out.length()-indx);
    return(finall);
} 

int main(){
    int sum = 0;
    for(int i = 1; i <= 1000000; i+=2){
        std::string s = std::to_string(i);
        std::string _s = s;
        std::reverse(_s.begin(), _s.end());
        
        std::string binString = bin(i);
        std::string _binString = binString;
        std::reverse(_binString.begin(), _binString.end());
        
        // if(i>100)break;
        // std::cout<<binString<<" : "<<_binString<<" -> "<<binString.compare(_binString)<<std::endl;
        // Compare returns 0 if they are the same***
        if(s.compare(_s)==0&&binString.compare(_binString)==0&&_binString.at(0)=='1'){
            sum+=i;
        }
    }
    std::cout<<sum<<std::endl;
}