#include<iostream>
using namespace std;

int main()
{
	//Set value for num
	int num = 1;
	//Output values for num using increment operators
	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "num after =" << num << endl;

	//Reset value for num
	num = 1;
	//Output values for num using increment operators
	cout << "num = " << num << endl;
	cout << "Increment Operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	//Reset value for num
	num = 1;
	//Output values for num using decrement operators
	cout << "num = " << num << endl;
	cout << "Decrement operator before num = " << --num << endl;
	cout << "num after = " << num << endl;

	//Reset value for num
	num = 1;
	//Output values for num using decrement operators
	cout << "num = " << num << endl;
	cout << "Decrement Operator after num = " << num-- << endl;
	cout << "num after = " << num << endl;

	//Get user input
	std::cin.get();
	return 0;
}