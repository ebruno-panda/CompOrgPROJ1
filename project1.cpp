/*Written in C++ first since I am more familiar with it. This program will be converted into Assembly*/
#include <iostream> //(1)
#include string //(2)
using namespace std; //(3)

int main(){ //(4)
	string contestar; //(5) | stores user input
	getline(cin, contestar); //(1)

	int N = 26 + (2935002 % 11); //(2) ID has a 0 in front | N = 26 + 4 | base N = 30

	/*Outputs 0 if input length > 10*/
	if (contestar.length() > 10){cout << 0 << endl;} //(3)

	else { //(4)
	/*Will hold total of string base-N value*/
		int record_says = 0; //(5)

		for(int value = 0; value < 10; value++){//(1)
		char actual = contestar[value]; //(2) /*element value per index*/ 
		int dec = int(actual); //(3) | ASCII decimal value of each character      

     		 /*Casts charcater value in input to int value*/
		stringstream ch; //(4)
		ch << actual; int holder; ch >> holder; //(5)
