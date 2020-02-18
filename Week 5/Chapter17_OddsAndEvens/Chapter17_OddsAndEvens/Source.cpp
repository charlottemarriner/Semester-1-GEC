#include <iostream>
using namespace std;

//Initialise functions
bool isEven(int playerInput);
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

int main()
{
	//Initialise variables
	int playerInput;
	int numOfOdd = 0;
	int numOfEven = 0;
	int oddTotal = 0;
	int evenTotal = 0;

	//Asks user to input 10 integers, sorts them as odd or even
	for (int i = 1; i <= 10; i++)
	{
		cout << "Please input an integer" << endl;
		cin >> playerInput;

		if (isEven(playerInput) == true)
		{
			numOfEven++;
			evenTotal += playerInput;
		}
		else
		{
			numOfOdd++;
			oddTotal += playerInput;
		}
	}
	
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
	return 0;
}

//Output all variables
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "The number of odd numbers was " << numOfOdd << " and the odd total was: " << oddTotal << endl;
	cout << "The number of even numbers was " << numOfEven << " and the even total was: " << evenTotal << endl;

}

//If even, return true, if odd, return false
bool isEven(int playerInput)
{
	if (playerInput % 2 == 0)
		return true;
	else
	{
		return false;
	}
}