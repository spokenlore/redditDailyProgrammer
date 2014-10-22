// Reddit.com/r/dailyprogrammer Challenges : Easy#8
// 99 Bottles of Beer on the Wall
// Input: Unnecessary
// 10/21/2014

#include <stdlib.h>
#include <iostream>

int main(){
	for(int i = 99; i > 0; i--){
		std::cout << i << " bottles of beer on the wall, " << i 
		<< " bottles of beer...\n" << "Take one down, pass it around, " 
		<< i-1 << " bottles of beer on the wall.\n";
	}
	system("PAUSE");
	return 0;
}