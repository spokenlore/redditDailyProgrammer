#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

string bubbleSort(string);

int main(){
	string testString;
	cin >> testString;

	cout << testString.length();
	cout << bubbleSort(testString);
	system("PAUSE");
	return 0;
}

string bubbleSort(string sortString){
	char temp;
	for (int i = 0; i < sortString.length(); i++){
		for (int j = 0; j <= sortString.length(); j++){
			if (sortString[j] > sortString[j+1] and j < sortString.length() - 1){
				temp = sortString[j+1];
				sortString[j+1] = sortString[j];
				sortString[j] = temp;
				cout << sortString << '\n';
			}
		}
	}
	return sortString;
}