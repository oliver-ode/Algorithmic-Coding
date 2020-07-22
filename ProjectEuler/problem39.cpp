#include "helper.hpp"

int main(){
    int maxCnt = 0;
    int pVal;
    for(int p = 10; p <= 1000; p++){
        int cnt = 0;
        for(int a = 1; a < p; a++){
            for(int b = a; b < p-a; b++){
                float c = std::sqrt(a*a+b*b);
                if(floor(c)==c){
                    int _c = (int)c;
                    if(a+b+_c==p){
                        cnt++;
                    }
                }
            }
        }
        if(cnt>maxCnt){
            maxCnt=cnt;
            pVal=p;
        }
    }
    std::cout<<pVal<<std::endl;
}