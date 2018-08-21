#include <iostream>
#include <string.h> 
#include "../src/hello_world.h"
#include "../src/taran_add.h"
#include "../src/reverser.h"

int add_test_1() {
	int x = 1;
	int y = 3;
	return !(sum(x,y)==4);
}

int add_test_2() {
	int x = -5;
	int y = 10;
	return !(x + y == 5);
}

int add_test_3() {
	int x = 10;
	int y = 34;
	return !(x + y == 44);
}

int add_test_4() {
	int x = 10;
	int y = -10;
	return !(x + y == 0);
}

int t2() {
	std::cout << "0";
	return 0;
}

int main(int argc, char *argv[]) {
	std::cout << argv[1];
	if (!strcmp(argv[1],"at1"))
		return add_test_1();
	else if (!strcmp(argv[1],"at2"))
		return add_test_2();
	else if (!strcmp(argv[1],"at3"))
		return add_test_3();
	else if (!strcmp(argv[1],"at4"))
		return add_test_4();
	else if (!strcmp(argv[1],"at2"))
		return add_test_2();
	return 1;
}