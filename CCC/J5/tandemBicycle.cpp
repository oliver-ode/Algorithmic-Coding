#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int question;
    // 1 - minimum total speed
    // 2 - maximum total speed
    cin>>question;
    int bicyclists;
    cin>>bicyclists;
    int value;
    vector<int> dmojistan;
    vector<int> pegland;
    for (int i = 0; i < bicyclists; i++){
        cin>>value;
        dmojistan.push_back(value);
    }
    for (int i = 0; i < bicyclists; i++){
        cin>>value;
        pegland.push_back(value);
    }
    int total = 0;
    sort(dmojistan.begin(), dmojistan.end());
    sort(pegland.begin(), pegland.end());
    if(question == 1){
        for (int i = 0; i < bicyclists; i++){
            if (dmojistan[i] <= pegland[i]){
                total += (int)pegland[i];
            }
            else if(dmojistan[i] > pegland[i]){
                total += (int)dmojistan[i];
            }
        }
        cout<<total;
    }
    else if(question == 2){
        reverse(pegland.begin(), pegland.end());
        for (int i = 0; i < bicyclists; i++){
            if (dmojistan[i] <= pegland[i]){
                total += (int)pegland[i];
            }
            else if(dmojistan[i] > pegland[i]){
                total += (int)dmojistan[i];
            }
        }
        cout<<total;
    }
    return(0);
}