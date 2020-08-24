#include "helper.hpp"

int main(){
    std::vector<int> primes;
    primes.push_back(2);
    for(int i = 3; i < 1000000; i+=2){
        if(isPrime(i)) primes.push_back(i);
    }
    std::string s;

    int sum = 0;
    int cnt = 0;

    for(int i = 4; i < primes.size(); i++){
        bool gud = true;
        s = std::to_string(primes.at(i));
        int len = s.length();
        for(int k = 0; k < len; k++){
            if(!isPrime(std::stoi(s))){
                gud = false;
                break;
            }
            s = s.substr(1,s.length());
        }
        s = std::to_string(primes.at(i));
        for(int k = 0; k < len; k++){
            if(!isPrime(std::stoi(s))){
                if(primes.at(i)==23)std::cout<<s<<std::endl;
                gud = false;
                break;
            }
            s = s.substr(0,s.length()-1);
        }
        
        if(gud){
            sum+=primes.at(i);
            cnt++;
        }
        if(cnt==11) {
            std::cout<<sum<<std::endl;
            std::exit(0);
        }

        s.clear();
    }
}