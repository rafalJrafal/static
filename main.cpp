#include <iostream>

#include "inc/ClassA.h"

using std::cout;
using std::endl;

using StaticBaseClass::Base;
using StaticBaseClass::ClassA;

int main(int argc, char** argv) {
	Base a, b, c, d;
	ClassA xxx, asd, asdfds, asdfsad, asdfsdaczx, asfc;
	
	cout << xxx.counter << endl << xxx.toStr();
		
	return 0;
}
