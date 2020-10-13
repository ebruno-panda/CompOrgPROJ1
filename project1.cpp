/*Written in C++ first since I am more familiar with it. This program will be converted into Assembly*/
#include <iostream> //(1)
#include <string> //(2)
#include <sstream> //(3)
using namespace std; //(4)

int main(){ //(5)
	string contestar; //(1) | stores user input
	getline(cin, contestar); //(2)

	/*int N = 26 + (2935002 % 11);*/ //(2) ID has a 0 in front | N = 26 + 4 | base N = 30

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
		
		/*If whitespace, its value is 0*/
     	        if(actual == ' '){holder = 0;} //(1)
      
     	        /*converting to base 30 value*/
     	        if (holder >= 1 && holder <= 10){holder = holder;}  //(2) | if int value of char is from 1-10, the value is the int of itself
	        else if(dec >= 65 && dec <= 84){holder = dec - 55;} //(3) | upper case values to base-N
	        else if(dec >= 97 && dec <= 116){holder = dec - 87;} //(4) | lower case values to base-N  
	        else{holder = 0;}//(5) | if int value of char is 0, base-N of char is 0
