// reddit.com/r/dailyprogrammer/wiki/challenges
// 11/3/2014
// Prompt: Validate a phone number, as if written on an input form.
// Telephone numbers can be written as ten digits, or with dashes, spaces, or dots between the three segments, or with the area code parenthesized.
// White space between segments is optional.

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
// Find the library for standard regex
// #include <regex>

int main(){
	std::string phoneNumber;
	bool isPhoneNumber = false;
	std::cout << "Please enter a phone number to be validated\n";
	std::cin >> phoneNumber;
	if (regex_match(phoneNumber, regex("[0-9]{3}-[0-9]{4}")))
		isPhoneNumber = true;
	if (std::regex_match(phoneNumber, regex("[0-9]{3}-[0-9]{3}-[0-9]{4}")))
		isPhoneNumber = true;
	// Match (xxx)xxx-xxx
	// Match (xxx)-xxx-xxx
	// Match xxx-xxx-xxx
	// Match xxx xxx xxx
	if (isPhoneNumber = true){
		std::cout << phoneNumber << " is a legitimate phone number.";
	}
	system("PAUSE");
	return 0;
}
