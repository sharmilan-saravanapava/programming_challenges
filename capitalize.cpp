#include "capitalize.h"

string capitalizer(string input) { 
	for (int i=0; i<input.length(); i++) {
		input[i]= (int)input[i] - 32;
	}

	return input;
}

void prompter() {
	string input = "";

	cout << "What  is your name?" << endl;
	cin >> input;

	cout << capitalizer(input) << endl;
}
