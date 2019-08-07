#include "../inc/ClassA.h"

using StaticBaseClass::ClassA;

ClassA * ClassA::lastUsed = 0;
list<ClassA*> ClassA::allUsed;

ClassA::ClassA() {
	lastUsed = this;
	allUsed.push_back(this);
}

string ClassA::toStr() {
	string returnString = "All Data:\n";
	for (list<ClassA*>::iterator i = allUsed.begin(); i != allUsed.end(); i++) {
		char address[1000];
		sprintf(address, "%p", *i);
		returnString.append(address);
		returnString.append(" address\n");
	}
	return returnString;
}
