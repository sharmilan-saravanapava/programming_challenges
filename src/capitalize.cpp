#include "capitalize.h"

string capitalizer(string input) { 
	for (uint i=0; i<input.length(); i++) {
		input[i]= (int)input[i] - 32;
	}

	return input;
}
