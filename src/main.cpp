#include <iostream>
#include <string>
#include "hello_world.h"
#include "taran_add.h"
#include "reverser.h"
#include "capitalize.h"

using namespace std;

void capitalize_prompter() {
	string input = "";

	cout << "What  is your name?" << endl;
	cin >> input;

	cout << capitalizer(input) << endl;
}

void reverser_prompter () {

	string word= "";

	cout <<"Enter word"<<endl;
	cin>>word;

	cout<<reverser(word)<<endl;
}

int main() {
	capitalize_prompter();
}

