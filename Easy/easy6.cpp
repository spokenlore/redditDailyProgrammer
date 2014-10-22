// reddit.com/dailyProgrammer/wiki/challenges
// Easy Problemset #6

// Create a program that will calculate pi to x (in this case 30) digits
// Unfortunately doubles only have precision up to 15 digits;

// Uses John Machin's arctan series, better known as:
// pi/4 = 4

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>

int main(){
	int numDigits;
	double pi;

	//std::cout << "Unforunately only works up to 15 digits due to c++ double precision limitations\n"
		//<< "Please enter the number of digits you would like pi calculated to:\n";
	//std::cin >> numDigits;

	for(int i = 1; i < 10; i++){
		double j;
		if (i % 2 == 0){
			j = -(1/(i*i+1));
		}
		else {
			j = (1/(i*i+1));
		}
		pi += j;
		pi *= 4;
		std::cout << "Pi value is currently ";
		std::cout.precision(10);
		std::cout << pi << "\n";
		std::cout << std::cout.precision() << "\n";
	}
	system("PAUSE");
	return 0;
}