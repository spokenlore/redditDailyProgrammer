// reddit.com/r/dailyprogrammer Easy Challenge #9
// 10/21/2014
// Prompt: Build a program which accepts digits as inputs, and then outputs them after sorting
// Extra Credit: Accepts alphabetical characters as well 
// Input: Numbers / Alphabetical characters
// Outputs to console

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>

using namespace std;

string bubbleSort(string);

int main(){
	std::string inputString;
	std::string arr[50];
	int i = 0;
	std::cout << "Please enter strings\n"
		<< "Enter 'exit' to exit the program \n"
		<< "Enter 'finished' to begin sorting \n";
	while (std::cin >> inputString){
		if (inputString == "exit")
			exit(1);
		if (inputString == "finished")
			{
			std::cout << i;
			break;
		}
		arr[i] = inputString;
		i++;
	}
	
	std::cout << "\n";
	int numElements = i;
	for (int a = 0; a < i; a++){
		arr[a] = bubbleSort(arr[a]);
	}
	for (int j = 0; j < numElements; j++){
		for (int iterator = 0; iterator < i; iterator++){
			if (arr[iterator] > arr[iterator+1]){
				std::string x;
				x = arr[iterator+1];
				arr[iterator+1] = arr[iterator];
				arr[iterator] = x;
			}
		}
	}
	
	for (int k = 0; k <= i; k++){
		std::cout << arr[k] << " ";
	}
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

string bubbleSort(string sortString){
	char temp;
	for (int i = 0; i < sortString.length(); i++){
		for (int j = 0; j <= sortString.length(); j++){
			if (sortString[j] > sortString[j+1] and j < sortString.length() - 1){
				temp = sortString[j+1];
				sortString[j+1] = sortString[j];
				sortString[j] = temp;
				// cout << sortString << '\n';
			}
		}
	}
	return sortString;
}