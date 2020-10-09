/*Written in C++ first since I am more familiar with it. This program will be converted into Assembly*/
#include <iostream> //(1)
#include string //(2)
using namespace std; //(3)

int main(){ //(4)
	string contestar; //(5) | stores user input
	cin >> contestar; //(1)
	
	int N = 26 + (2935002 % 11); //(2) ID has a 0 in front | N = 26 + 4 | N = 30
	int M = N - 10; //(3)

	while(contestar.length() != 10){ //(4)
		cout << "Sorry. Iput must be exactly 10 characters." << endl;}} //(5)
