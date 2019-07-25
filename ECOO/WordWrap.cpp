#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main(){
	int w;
	string str;
    for(int i = 0; i < 5; i++){
    	cin >> w;
    	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //To clear input buffer
    	getline(cin, str);
    	istringstream iss(str);
    	vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{}};
    	int cur = 0;
    	for(int i = 0; i < tokens.size(); i++){
    		if(cur + tokens.at(0).length() < w){
    			cout 
    		}
    	}
    }
    return 0;
}