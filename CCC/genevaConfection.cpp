#include <iostream>
#include <stack>

using namespace std;

int main(){
	int inputs;
	cin>>inputs;
	for(int i = 0; i < inputs; i++){
		stack<int> mt;
		stack<int> br;
		int sizes;
		cin>>sizes;
		if(i == inputs -1){
			sizes --;
		}
		for(int k = 0; k < sizes; k++){
			int carName;
			cin>>carName;
			mt.push(carName);
		}
		int nextCar = 1;
		while(!mt.empty()){
			if(mt.top() == nextCar){
				mt.pop();
				nextCar++;
			}
			else if(!br.empty() && br.top() == nextCar){
				br.pop();
				nextCar++;
			}
			else{
				br.push(mt.top());
				mt.pop();
			}
		}
		bool isPossible = true;
		while(!br.empty()){
			if(br.top() == nextCar){
				nextCar++;
				br.pop();
			}
			else{
				br.pop();
				isPossible = false;
			}
		}
		if(isPossible){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}		
	}
	return(0);
}