using namespace std;
#include <iostream>
int main(){
    string msg;
    int happy = 0;
    int sad = 0;
    getline(cin, msg);
    if(msg.length() <= 2){
        cout<<"none"<<endl;
        return(0);
    }
    for(int i = 0; i < msg.length()-2; i++){
        if(msg[i] == ':'){
            if(msg[i+1] == '-'){
                if(msg[i+2] == ')'){
                    happy++;
                }
                else if(msg[i+2] == '('){
                    sad ++;
                }
            }
        }
    }
    if(happy > sad){
        cout<<"happy"<<endl;
    }
    else if(sad > happy){
        cout<<"sad"<<endl;
    }
    else if(sad == 0 && happy == 0){
        cout<<"none"<<endl;
    }
    else{
        cout<<"unsure"<<endl;
    }
    return(0);
}
