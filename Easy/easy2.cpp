#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char var;
	double f = 0, m = 0, a = 0;
	cout << "Welcome to the F=ma calculator!" << endl << "Please enter the variable you would like to solve for (f, m, or a)" << endl;
	cin >> var;

	if (var == 'a'){
	cout << endl << "Please enter a value for f" << endl;
	cin >> f;
	cout << endl << "Please enter a value for m" << endl;
	cin >> m;
	a = m/f;
	cout << endl << "Your accceleration is " << a << endl;	
	}
	else if (var == 'f'){		
	cout << endl << "Please enter a value for m" << endl;
	cin >> m;
	cout << endl << "Please enter a value for a" << endl;
	cin >> a;
	f = m*a; 
	cout << endl << "Your force is " << f << endl;
	}
	else if (var == 'm') {
	cout << endl << "Please enter a value for a" << endl;
	cin >> a;
	cout << endl << "Please enter a value for f" << endl;
	cin >> f;
	m = a/f;
	cout << endl << "Your mass is" << m << endl;
	}
	else {
		cout << "Detected invalid input. Please try again later!" << endl;
	}
	system("pause");
	return 0;
}