#include "../inc/Base.h"

using StaticBaseClass::Base;

unsigned int Base::counter = 0;

Base::Base() {
	counter++;
}

Base::~Base() {
	counter--;
}

static int constant = 3;
