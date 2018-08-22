#include "reverser.h"

string reverser(string word){
	string new_word= "";

	for(int i = word.length()-1; i>=0; i--) {
		new_word+= word[i];
	}

	return new_word;
}
