#ifndef CLASSA_H
#define CLASSA_H

#include <list>
#include <string>

#include "Base.h"

using std::list;
using std::string;

namespace StaticBaseClass {

class ClassA : public Base {
	public:
		ClassA();
		string toStr();
	private:
		static ClassA * lastUsed;
		static list<ClassA*> allUsed;
};

}

#endif
