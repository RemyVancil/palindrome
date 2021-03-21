#include <iostream>

std::string stringFormat(std::string input){
	for(int i = 0; i < input.length(); i++){
		input[i] = tolower(input[i]);
	}
	input.erase(std::remove(input.begin(),input.end(),' '),input.end());
	return input;
}

int palindrome(std::string input){
	// Removes spaces
	input = stringFormat(input);
	// Declare variables
	int len = input.length();
	int ans = 1;
	for(int i = 0; i < len; i++){
		if(input[i] != input[len - i - 1]){
			ans = 0;
			break;
		}
	}
	return ans;
}

int main(){
	// Declare variables
	std::string input;
	int p;
	// Ask for an input to be checked
	std::cout << "Input a string." << std::endl;
	std::getline(std::cin, input);
	// Call palindrome function with inputted string
	p = palindrome(input);
	// Print message for result
	if(p == 1){
		std::cout << "\"" << input << "\"" << " is a palindrome!" << std::endl;
	}
	else{
		std::cout << "\"" << input << "\"" << " is NOT a palindrome." << std::endl;
	}
}