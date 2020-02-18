#include<iostream>
using namespace std;

int main()
{
	//Initiate and set int values
	int myInt1 = 5, myInt2;
	myInt2 = 10;
	//Output these values
	cout << "Value stored in myInt1 is " << myInt1 << endl;
	cout << "Value stored in myInt2 is " << myInt2 << endl;

	//Initiate and set float values
	float myFloat1 = 1.2f, myFloat2;
	myFloat2 = 9.9f;
	//Output these values
	cout << "Value stored in myFloat1 is " << myFloat1 << endl;
	cout << "Value stored in myFloat2 is " << myFloat2 << endl;

	//Initiate and set char value
	char myChar = 'a';
	//Output this value
	cout << "Value stored in myChar is " << myChar << endl;

	//Get user input
	cin.get();
	return 0;
}