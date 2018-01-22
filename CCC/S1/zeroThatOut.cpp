#include <iostream>
#include <stack>
int main(){
	std::stack<int> numbers;
	int numOfNumbers = 0;
	int curNum = 0;
	std::cin>>numOfNumbers;
	for(int i = 0; i < numOfNumbers; i++){
		std::cin>>curNum;
		if(curNum == 0 and numbers.size() > 0){
			numbers.pop();
		}
		else{
			numbers.push(curNum);
		}
	}
	int finalAmount = 0;
	for(int i = 0; i <= numbers.size(); i++){
		finalAmount += numbers.top();
		numbers.pop();
	}
	std::cout<<finalAmount;
	return(0);
}