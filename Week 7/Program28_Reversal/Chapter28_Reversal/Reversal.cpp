#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialise variable
	string numInput;

	//While input is not -1, do the following 
	while (numInput != "-1")
	{

		cout << "Please enter an integer with 2-11 numbers, or enter -1 to exit the program: ";
		cin >> numInput;

		//If input length is greater than 1 and less than 11, do the following
		if (numInput.length() > 1 && numInput.length() < 11)
		{
			for (int i = numInput.length(); i > -1; --i)
			{
				cout << numInput[i] << endl;
			}
			
		}
		else
			cout << "Invalid number" << endl;
	}

	cout << "You have entered -1, now exiting program" << endl;
	return 0;
}
	

