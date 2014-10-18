#include <iostream>
#include <stdlib.h>
#include <string>
#include <cctype>

// reddit.com/r/dailyprogrammer Easy Challenge #3
// Create a simple cipher

/* Program takes inputs for:
	cryptString: string that will be encrypted/decrypted
	cipherNum: Number of places to be encrypted / decrypted
	encryptionChoice: Choice of encryption or decryption

	Program checks for cipherNum that is too large
	Program will also break if encryptionChoice is invalid
*/
int main(){
	std::string cryptString;
	char encryptionChoice;
	int cipherNum;
	std::cout << "Please enter a string\n";
	std::cin >> cryptString;
	std::cout << "Please enter number of places to encrypt or decrypt\n";
	std::cin >> cipherNum;
	std::cout << "Please enter E/e for encryption, or D/d for decryption\n";
	std::cin >> encryptionChoice;

	int j = cryptString.length();

	for (int i = 0; i < j; i++){
		cryptString[i] = toupper(cryptString[i]);
	}

	if (cipherNum > 26){
		std::cout << "\n Error! Size for cipher too large";
		system("PAUSE");
		return 0;
	}
	else if (encryptionChoice == 'E' or encryptionChoice == 'e'){
		for (int i = 0; i < j; i++){
			cryptString[i] += cipherNum;
		}
		std::cout << "Your new string is " << cryptString << "!\n";
	}
	else if (encryptionChoice == 'D' or encryptionChoice == 'd'){
		for (int i = 0; i < j; i++){
			cryptString[i] -= cipherNum;
		}
		std::cout << "Your new string is" << cryptString << "!\n";
	}
	else 
		std::cout << "\nError!";
		system("PAUSE");
		return 0;
}