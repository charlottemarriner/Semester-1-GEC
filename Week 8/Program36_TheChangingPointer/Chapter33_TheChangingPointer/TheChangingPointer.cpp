#include <iostream>
#include <string>

using namespace std;

//Initialise functions
void inputDetails(int* n1, int* n2);
void outputDetails(int* n1, int* n2, int* pNum);

int main()
{
	//Initialise variables
	int num1, num2;

	//Call function
	inputDetails(&num1, &num2);

	//Num pointer point to address of num1
	int *pNum = &num1;

	//Call function
	outputDetails(&num1, &num2,pNum);
}

void inputDetails(int* num1, int* num2)
{
	cout << "Please input a number" << endl;
	cin>>*num1;
	cout << "Please input a second number" << endl;
	cin>>*num2;
}

void outputDetails(int* num1, int* num2, int* pNum)
{
	cout << "num1 value: " <<*num1 << endl;
	cout << "num1 address: " << &num1 << endl;
	cout << "num 2 value: " << *num2 << endl;
	cout << "num 2 address: " << &num2 << endl;

	cout << "pNum value: " << pNum << endl;
	cout << "*pNum dereferenced = " << *pNum << endl;
	cout << "pNum address: " << &pNum << endl;
}
