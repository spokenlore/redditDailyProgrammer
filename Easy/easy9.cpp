// reddit.com/r/dailyprogrammer Easy Challenge #9
// 10/21/2014
// Prompt: Build a program which accepts digits as inputs, and then outputs them after sorting
// Extra Credit: Accepts alphabetical characters as well 
// Input: Numbers / Alphabetical characters
// Outputs to console

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

int main(){
	std::string inputString;
	std::string arr[50];
	int i = 0;
	std::cout << "Please enter strings (up to 50) \n"
		<< "Or enter 'exit' to denote completion";
	while (i < 50 and inputString != "exit"){
		std::cin >> inputString;
		arr[i] = inputString;
		i++;
	}
	std::cout << "\n";
	for (int j = 0; j < i; j++){
		for (int iterator = 0; iterator < i; i++){
			if (arr[iterator] > arr[iterator+1]){
				std::string x;
				x = arr[iterator+1];
				arr[iterator+1] = arr[iterator];
				arr[iterator] = x;
			}
		}
	}
	for (int k = 0; k < i; k++){
		std::cout << arr[k] << " ";
	}
	std::cout << "\n";
	system("PAUSE");
	return 0;
}