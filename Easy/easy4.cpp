// reddit.com/r/dailyProgrammer
// Easy Challenge #4
// Simple password generator

// Input: Number of characters in the password
// Input: How many passwords to generate
// Input: Choice of whether or not to include symbols and/or capital letters

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <string>

int main(){
	// Initialize random generator
	srand(time(NULL));

	int passwordLength, numPasswords;
	char passwordType;
	std::cout << "\nPlease enter the length of the password you would like generated\n";
	std::cin >> passwordLength;
	std::cout << "\nPlease enter the number of passwords you would like generated\n";
	std::cin >> numPasswords;
	std::cout << "\nPlease enter the type of passwords you would like generated\n"
		<< "For just lowercase and numbers enter 1\n"
		<< "For lowercase, numbers, and uppercase enter 2\n"
		<< "For lowercase, numbers, uppercase, and symbols, enter 3\n";
	std::cin >> passwordType;

	if (passwordType == '1'){
		// 36 choices
		char charactersForPW[] = "0123456789abcdefghijklmnopqrstuvwxyz";
		std::string passwordArray[numPasswords];
		for (int i = 0; i < numPasswords; i++){
			for (int j = 0; j < passwordLength; j++){
				passwordArray[i] += charactersForPW[rand()%36];
			}
		}
		for (int i = 0; i < numPasswords; i++){
			std::cout<<passwordArray[i] << '\n';
		}
	}
	else if (passwordType == '2'){
		// 62 choices
		char charactersForPW[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::string passwordArray[numPasswords];
		for (int i = 0; i < numPasswords; i++){
			for (int j = 0; j < passwordLength; j++){
				passwordArray[i] += charactersForPW[rand()%62];
			}
		}
		for (int i = 0; i < numPasswords; i++){
			std::cout<<passwordArray[i] << '\n';
		}
	}
	else if (passwordType == '3'){
		// 87 choices
		char charactersForPW[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*()+[]{}`~,./<>?-_=";
		std::string passwordArray[numPasswords];
		for (int i = 0; i < numPasswords; i++){
			for (int j = 0; j < passwordLength; j++){
				passwordArray[i] += charactersForPW[rand()%87];
			}
		}
		for (int i = 0; i < numPasswords; i++){
			std::cout<<passwordArray[i] << '\n';
		}
	}
	else{
		std::cout<< "\nPassword type invalid. Please try again later";
		system("PAUSE");
		return 0;
	}
	system("PAUSE");
	return 0;
}