#include <iostream>
using namespace std;


int main()
{
	//Initialise num1 and set num1 to user input
	cout << "Please enter a number" << endl;
	int num1;
	cin >> num1;
	cout << "Your first number is " << num1 << endl;

	//Initialise num2 and set num2 to user input
	cout << "Please enter another number" << endl;
	int num2;
	cin >> num2;
	cout << "Your second number is " << num2 << endl;

	//Initialise the sum and mean and their values
	int sum, mean;
	sum = num1 + num2;
	mean = sum / 2;

	//Output these values
	cout << "The sum of your numbers is " << sum << endl;
	cout << "The mean of your numbers is " << mean << endl;

	//Ask user to keep inputting numbers while num2 is not 0. 
	while (num2 !=0)
	{
		cout << "Please enter another number" << endl;
		cin >> num2;
		cout << "Your number is " << num2 << endl;

		sum = sum + num2;
		mean = sum / 2;

		cout << "The sum of your numbers is " << sum << endl;
		cout << "The mean of your numbers is " << mean << endl;
	}
}
