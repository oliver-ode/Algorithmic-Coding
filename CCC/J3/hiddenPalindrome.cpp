#include <iostream>

std::string rev(std::string str){
	std::string empty = "";
	for(int i = str.size()-1; i >= 0; i--){
		empty = empty + str.at(i);
	}
	return empty;
}

bool isPalindrome(std::string str){
	std::string temp = str;
	rev(temp);
	return !str.compare(temp);
}

int main(){
	std::string word;
	int maxLength = 0;
	getline(std::cin, word);
	for(int i = 0; i < word.size()+1; i++){
		for(int k = 0; k < word.size()-i+1; k++){
			if(isPalindrome(word.substr(i, k)) == 1 and word.substr(i, k).size() > maxLength){
				maxLength = word.substr(i, k).length();
			}
		}
	}
	std::cout<<maxLength<<std::endl;
	return(0);
}