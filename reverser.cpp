#include "reverser.h"



string reverser(string word){


	string new_word= "";

	int i=0;

	for(i= word.length()-1; i>=0; i--){
		new_word+= word[i];

}

return new_word;

}


	void prompt () {

	string word= "";

	cout <<"Enter word"<<endl;
	cin>>word;

	cout<<reverser(word)<<endl;


} 