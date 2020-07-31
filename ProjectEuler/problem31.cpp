#include "helper.hpp"

int main(){
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};
    int dp[201] = {0};
    dp[0] = 1;

    for(int i = 0; i < sizeof(coins)/sizeof(coins[0]); i++){
        for(int j = coins[i]; j <= 200; j++){
            dp[j] += dp[j-coins[i]];
        }
    }
    std::cout<<dp[200]<<std::endl;
}