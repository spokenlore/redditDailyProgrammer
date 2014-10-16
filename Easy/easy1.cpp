#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
	string name, age, username;

	cout<<"Input your name"<<endl;
	cin>>name;
	cout<<endl<<"Input your age"<<endl;
	cin>>age;
	cout<<endl<<"Input your username"<<endl;
	cin>>username;

	cout << "Your name is " << name << ", "
		<< "Your age is " << age << ", "
		<< "and your username is " << username << "!" << endl;
	system("PAUSE");
	return 0;
}