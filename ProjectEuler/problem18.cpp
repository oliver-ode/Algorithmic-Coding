#include "helper.hpp"

int main(){
    int n;
    std::cin>>n; //Number of rows
    int tria[n+1][n+1];
    std::memset(tria, 0, sizeof(tria));
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            std::cin>>tria[row][col];
        }
    }
    for(int row = n-1; row >= 0; row--){
        for(int col = 0; col <= row; col++){
            tria[row][col]+=std::max(tria[row+1][col], tria[row+1][col+1]);
        }
    }
    std::cout<<tria[0][0]<<std::endl;
}