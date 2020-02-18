#include<iostream>
using namespace std;

int main()
{
	//Set values for floats
	float fahrenheit = 95.0f, celsius;

	//Set calculation for celsius
	celsius = (fahrenheit - 32) * 0.5556;

	//Output the two values
	cout << fahrenheit << "F is equal to " << celsius << "C" << endl;

	//Get user input
	cin.get();
	return 0;
}