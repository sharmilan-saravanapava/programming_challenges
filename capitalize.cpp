#include "capitalize.h"


string capitalizer(string input) { 

int i; 

for (i=0; i<input.length(); i++) {

	char x = input [i];
	input[i]= (int)x - 32;

} 

 return input;

}


void prompter() {

	string input = "";

	cout <<"What  is your name?"<< endl;
	cin >> input;

	cout << capitalizer(input)<< endl;
	
}
