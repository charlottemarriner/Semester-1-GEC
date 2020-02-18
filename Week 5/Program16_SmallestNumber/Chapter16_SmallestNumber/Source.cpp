#include <iostream>
using namespace std;


void smallerNumber(int a, int b);

int main()
{
	//Initialise a and b
	int a, b;
	//Get user inputs for a and b
	cout << "Please input an integer" << endl;
	cin >> a;
	cout << "Please input another integer" << endl;
	cin >> b;

	//Call function
	smallerNumber(a, b);

	return 0;
}

//Function
void smallerNumber(int a, int b)
{
	if (a > b)
		cout << b << endl;
	else if (a < b)
		cout << a << endl;
	else if (a == b)
		cout << "Integer a and b are the exact same size" << endl;

}
