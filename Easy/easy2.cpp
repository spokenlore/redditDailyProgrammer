#include <iostream>
#include <stdlib.h>

// Simple implementation of a f = ma calculator (Force = mass * acceleration)
// Displays choices for picking different forms of the equation depending on what is being solved for

int main(){
	char var;
	double f = 0, m = 0, a = 0;
	std::cout << "Welcome to the F=ma calculator!" << "\n" << "Please enter the variable you would like to solve for (f, m, or a)" << "\n";
	std::cin >> var;

	if (var == 'a'){
	std::cout << "\n" << "Please enter a value for f" << "\n";
	std::cin >> f;
	std::cout << "\n" << "Please enter a value for m" << "\n";
	std::cin >> m;
	a = m/f;
	std::cout << "\n" << "Your accceleration is " << a << "\n";	
	}
	else if (var == 'f'){		
	std::cout << "\n" << "Please enter a value for m" << "\n";
	std::cin >> m;
	std::cout << "\n" << "Please enter a value for a" << "\n";
	std::cin >> a;
	f = m*a; 
	std::cout << "\n" << "Your force is " << f << "\n";
	}
	else if (var == 'm') {
	std::cout << "\n" << "Please enter a value for a" << "\n";
	std::cin >> a;
	std::cout << "\n" << "Please enter a value for f" << "\n";
	std::cin >> f;
	m = a/f;
	std::cout << "\n" << "Your mass is" << m << "\n";
	}
	else {
		std::cout << "Detected invalid input. Please try again later!" << "\n";
	}
	system("pause");
	return 0;
}