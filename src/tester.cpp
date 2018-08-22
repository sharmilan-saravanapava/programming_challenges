#include <iostream>
#include <string.h> 
#include "hello_world.h"
#include "taran_add.h"
#include "reverser.h"
#include "capitalize.h"
#include "factorial.h"

int main() {
	print_hello_world();
	std::cout << "3 + 4 = " << sum(3,4) << std::endl;
	std::cout << "Niroigen reversed " << reverser("Niroigen") << std::endl;
	std::cout << "taran capitalized " << capitalizer("taran") << std::endl;
	std::cout << "factorial 5 " << factorial(5) << std::endl;
	return 0;
}