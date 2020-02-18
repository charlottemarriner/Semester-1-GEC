#include <iostream>

using namespace std;

//Initialise functions
void numbers(int& rNum);
void addToNum(int& rNum);
void subtractFromNum(int& rNum);

int main()
{
	int num;

	//Call functions and output result
	numbers(num);
	cout << num << endl;

	addToNum(num);
	cout << num << endl;

	subtractFromNum(num);
	cout << num;
}

void numbers(int& rNum)
{
	cout << "Please input a number" << endl;
	cin >> rNum;
}

void addToNum(int& rNum)
{
	(rNum = rNum + 25);
}

void subtractFromNum(int& rNum)
{
	cout << "Input another number" << endl;
	cin >> rNum;
	cout << rNum << endl;
	(rNum = rNum - 25);
}
