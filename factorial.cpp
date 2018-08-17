#include "factorial.h"

	int factorial (int x){
 
	
	int y=0;

	int i=0;

	for (i=x; i>=1; i--){

	 y*= i;
}

return y;

}

	void input () {

	int x=0;


	cout<<"Please enter a value that you want the factorial of"<<endl;
	cin>> x;

	cout<<factorial(x)<<endl;
	

}
