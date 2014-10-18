#include <iostream>
#include <stdlib.h>
#include <string>

// Create a simple program that will take input and output of name, age, and username

int main(){
	std::string name, age, username;

	std::cout<<"Input your name"<<"\n";
	std::cin>>name;
	std::cout<<"\n"<<"Input your age"<<"\n";
	std::cin>>age;
	std::cout<<"\n"<<"Input your username"<<"\n";
	std::cin>>username;

	std::cout << "Your name is " << name << ", "
		<< "Your age is " << age << ", "
		<< "and your username is " << username << "!" << "\n";
	system("PAUSE");
	return 0;
}