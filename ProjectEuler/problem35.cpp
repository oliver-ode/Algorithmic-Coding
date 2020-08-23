#include "helper.hpp"

int main(){
    int sum = 0;
    std::vector<int> primes;
    primes.push_back(2);
    for(int num = 3; num < 1000000; num+=2){ // Could use sieve of eratosthenes
        if(isPrime(num))primes.push_back(num);
    }
    std::vector<int> perms;
    std::string s;
    for(int k = 0; k < primes.size(); k++){
        int num = primes.at(k);
        if(num<10){ // No need for switching
            sum++;
        }
        else{
            // Generate permutations
            s = std::to_string(num);

            float numHold = num;
            int numPerms = 1;
            while(numHold/10>1){
                numHold/=10;
                numPerms++;
            }
            for(int i = 0; i < numPerms; i++){
                perms.push_back(std::stoi(s));
                s = s.substr(1,s.length()) + s.at(0);
            }
            bool good = true;
            // Check for non primes
            for(int i = 0; i < numPerms; i++){
                if(!std::binary_search(primes.begin(), primes.end(), perms.at(i))){
                    good = false;
                    break;
                }
            }
            if(good){
                sum++;
            }

            perms.clear();
            s.clear();
        }
    }
    std::cout<<sum<<std::endl;
}