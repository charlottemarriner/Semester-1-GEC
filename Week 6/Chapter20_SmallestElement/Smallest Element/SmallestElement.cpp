#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
	//Initialise variables and array
	int myNumbers[10];
	int numCounter = 0;
	int smallestNum;
	
	//Have the user input 10 numbers
	for (int i = 0; i < 10; i++)
	{
		cout << "Please input an integer" << endl;
		cin >> myNumbers[numCounter];

		numCounter++;
	}

	//Output all user inputted elements from the array
	cout << "Array Element" << setw(15) << "Stored Value" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << setw(5) << i << setw(20) << myNumbers[i] << endl;

	}

	smallestNum = myNumbers[0];

	//Find the smallest number from the user inputted ara
	for (int i = 0; i < 10; i++)
	{
		if (myNumbers[i] < smallestNum)
		{
			smallestNum = myNumbers[i];
		}
	}

	cout << smallestNum << endl;

	return 0;
}