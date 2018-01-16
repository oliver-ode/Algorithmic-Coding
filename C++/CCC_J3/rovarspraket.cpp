using namespace std;
#include <iostream>

int main(){
    string msg;
    string result;
    getline(cin, msg);
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string consonant = "bcdfghjklmnprstvwxyz";
    string nextConsonant = "cdfghjklmnprstvwxyzz";
    string nearestVowel = "aaeeeiiiiooooouuuuuuu";
    for(int i = 0; i < msg.length(); i++){
        if(consonant.find(msg[i]) < consonant.length()){
            result = result + msg[i];
            result = result + nearestVowel[consonant.find(msg[i])];
            result = result + nextConsonant[consonant.find(msg[i])];
        }
        else{
            result = result + msg[i];
        }
    }
    cout<<result<<endl;
    return(0);
}

