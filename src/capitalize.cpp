#include "capitalize.h"

string capitalizer(string input) { 
	for (uint i=0; i<input.length(); i++) {
		if (input[i] >= 97 && input[i] <= 122)
			input[i] = (int)input[i] - 32;
	}

	return input;
}
