#include "factorial.h"

	int factorial (int x){
	int y=0;
	int i=0;

	for (i=x; i>=1; i--){
		y*= i;
	}

	return y;
}
