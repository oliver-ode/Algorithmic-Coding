#include <iostream>
int main(){
	std::string num;
	int finalArea, last;
	getline(std::cin, num);
	while(num.size() > 2){
		last = atoi(num.substr(num.size()-1, 1).c_str());
		std::cout<<last<<": Last number"<<std::endl;
		num = num.substr(0, num.size()-1);
		std::cout<<num<<": Number after removed the final index"<<std::endl;
		finalArea = atoi(num.substr(num.size()-2, 2).c_str());
		std::cout<<finalArea<<": The final part of the number"<<std::endl;
		finalArea -= last;
		num = num.substr(0, num.size()-2) + std::to_string(finalArea);
		std::cout<<num<<": Number after the calculation"<<std::endl;
		std::cout<<"Next loop iteration"<<std::endl;
	}
	std::cout<<num<<std::endl;
	return(0);
}