//ChildClass.cpp

#include "ChildClass.h"
#include "BaseClass.h"
#include <iostream>
using namespace::std;

ChildClass::ChildClass() :BaseClass()
{
	cout << "ChildClass Constructor" << endl;
}

ChildClass::~ChildClass()
{
	cout << "ChildClass Destructor" << endl;
}