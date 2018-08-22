#include "factorial.h"

int factorial (int x){
	int y=1;

	if (x < 0) {
		return y;
	}
	else {
		int i=1;

		for (i=x; i>=1; i--){
			y*= i;
		}

		return y;
	}
}
