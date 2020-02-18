#include <iostream>
using namespace std;

int main()
{
	//Initialise variable
	int weather;

	//Output that requires the user to enter a number input
	cout << "Hello there human, what is the weather today? Is it:" << endl
		<< "Sunny - 1" << endl
		<< "Cloudy - 2" << endl
		<< "Raining - 3" << endl
		<< "EXIT - 4" << endl
		<< "Please input the approprite number." << endl << endl;
	cin >> weather;

	//Switch statement based off of the number that the user inputs
	switch (weather)
	{
	case 1:
		cout << "It's hot outside, make sure you wear your sunscreen!" << endl;
	break;

	case 2:
		cout << "It's cloudy out there, make sure you wear something a little warmer!" << endl;
	break;

	case 3:
		cout << "It's raining outside, make sure you wear a raincoat!" << endl;
	break;

	case 4: 
		cout << "This program will exit now" << endl;
	break;

	default: 
		cout << "This program will exit now" << endl;
	break;
	}

	//Get user input
	cin.get();
	return 0;
}