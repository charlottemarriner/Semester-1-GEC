//Main.cpp

#include "ChildClass.h"
#include <iostream>

using namespace::std;

int main()
{
	cout << "CREATING CHILD CLASS ON HEAP" << endl;
	//Create on the heap
	ChildClass* pChild = new ChildClass();

	cout << "DELETING CHILD CLASS FROM HEAP" << endl;
	delete pChild;

	cout << "CREATING CHILD CLASS ON STACK" << endl;
	//Create on the stack - No parameters, so no brackets required.
	ChildClass child;

	//Pause for input
	cin.get();

	cout << "EXITING PROGRAM - STACK WILL NOW BE CLEARED" << endl;

	return 0;
}