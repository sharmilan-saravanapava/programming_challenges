#include <iostream>
#include <string>
#include "hello_world.h"
#include "taran_add.h"

int main()
{
	print_hello_world();

	int x = 4;
	int y = 2;

	std::cout << sum(x, y) << std::endl;
}
