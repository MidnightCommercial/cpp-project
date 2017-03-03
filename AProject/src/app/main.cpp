#include <iostream>

#include "AClass.h"

using namespace std;

int main(int argc, const char * argv[]) {

	AClass hello("Hello World");

	cout << hello.saySomething() << endl;
	
 	return 0;
 }