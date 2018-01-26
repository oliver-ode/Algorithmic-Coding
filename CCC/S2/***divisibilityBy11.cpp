#include <iostream>
int main(){
	std::string num;
	int finalNum;
	int last;
	int newEnd;
	getline(std::cin, num);
	std::string answer = num;
	std::cout<<answer<<std::endl;
	for(int i = 0; i < answer.size()*2; i++){
		finalNum = atoi(answer.substr(answer.size()-1, 1).c_str());
		last = atoi(answer.substr(answer.size()-4, 4).c_str());
		answer = answer.substr(0, answer.size()-1);
		newEnd = last-finalNum;
		answer = answer.substr(0, answer.size()-4) + std::to_string(newEnd);
		std::cout<<answer<<std::endl;
	}
	return(0);
}