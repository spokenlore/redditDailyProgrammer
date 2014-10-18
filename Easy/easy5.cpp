// reddit.com/r/dailyprogrammer
// Easy challenge #5
// Create a program that requires a username and password to open
// Optional: Requests the information from a .txt file

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

int getLoginCredentials(std::string, std::string, std::string);

int main(){
	std::string fileName;
	std::cout << "Please enter the full filename of the file with the login information. (ex. 123.txt)\n";
	std::cin >> fileName;

	std::string usernameAttempt, passwordAttempt;

	std::cout << "\nPlease enter your username:\n";
	std::cin >> usernameAttempt;
	std::cout << "Please enter your password:\n";
	std::cin >> passwordAttempt;
	if (getLoginCredentials(usernameAttempt, passwordAttempt, fileName) == 1){
		std::cout << "\nLogin was successful! Welcome, " << usernameAttempt <<"\n";
	}
	else {
		std::cout<< "Your login information was invalid. Please try again later.\n";
	}
	system("PAUSE");
	return 0;
}

int getLoginCredentials(std::string usernameAttempt, std::string passwordAttempt, std::string fileName){
	std::string username, password;

	std::fstream openfile;
	openfile.open(fileName.c_str());
	openfile >> username;
	openfile >> password;

	if((username == usernameAttempt) and (password == passwordAttempt)){
		return 1;
	}
	else{
		return 0;
	}
}