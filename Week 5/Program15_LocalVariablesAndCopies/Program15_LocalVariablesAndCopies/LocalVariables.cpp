#include <iostream>
using namespace std;

void add2ToNumber(int num);

int main()
{
	int myNum = 0;

	//Output the contents of myNum before the function call.
	cout << "MAIN [before]: myNum = " << myNum << endl;

	//Call the function which will add 2 to the value.
	add2ToNumber(myNum);

	//Output the contents of myNum after the function call.
	cout << "MAIN [after]: myNum = " << myNum << endl;

	return 0;
}

void add2ToNumber(int num)
{
	//Add 2 to the variable passed in.
	num += 2;

	//Output the contents of num within the function.
	cout << "FUNCTION: num = " << num << endl;
}