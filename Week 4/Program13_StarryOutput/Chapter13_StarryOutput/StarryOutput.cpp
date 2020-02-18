#include <iostream>
using namespace std;

//Initialise variables
string answer = "y";
int num;

int main()
{
	//While answer is yes, continue to ask for a number between one and 10 then output stars in a line
	while (answer != "n" && answer != "N" )
	{
		cout << "Please input a number between 1 and 10" << endl;
		cin >> num;
		//Checks if user input is between 1 and 10.
		if (num >= 1 && num <= 10)
		{
			for (int i = 1; i <= num; i++)
			{
				for (int j = 0; j < i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
		else
		{
			cout << "Invalid Input" << endl;
		}

		cout << "Another go? Y/N?" << endl;
		cin >> answer;

	}
	cout << "Goodbye" << endl;

	return 0;
}