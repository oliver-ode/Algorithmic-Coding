#include "helper.hpp"

int main(){
    int SUNDAY = 7;
    int day = 1;
    int month = 1;
    int year = 1900;
    int actualDay=1;
    int cnt=0;
    while(year<2001){
        // Increase day
        if(month==9||month==4||month==6||month==11){ // 30 days
            if(day==30){
                month++;
                day=1;
            }
            else day++;
        }
        else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){ // 31 days
            if(month==12){
                year++;
                month=1;
                day=1;
            }
            else if(day==31){
                month++;
                day=1;
            }
            else day++;
        }
        else if(month==2){ // February
            if(((year%4==0&&year%100!=0)||year%400==0)&&day==29){
                month++;
                day = 1;
            }
            else if(day==28){
                month++;
                day=1;
            }
            else day++;
        }
        actualDay++;
        
        if(actualDay%SUNDAY==0&&year>=1901&&day==1) cnt++;
    }
    std::cout<<cnt<<std::endl;
}