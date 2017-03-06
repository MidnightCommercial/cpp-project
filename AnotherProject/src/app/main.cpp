#include <iostream>

#include "AnotherClass.h"

using namespace std;

int main(int argc, const char * argv[]) {

	AnotherClass hello("Hello World");

	cout << hello.saySomething() << endl;
	
 	return 0;
 }