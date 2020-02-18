#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

//Initialise functions
void largestNumberPosition(int numbers[5], int i, int j, int temp);
void ascendingOrder(int numbers[5], int i, int j, int temp);
void descendingOrder(int numbers[5], int i, int j, int temp);

int main()
{
	//Initialise variables and array
	int numbers[5];
	int i, j=0, temp = 0;

	//Have user input 5 integers
	for (i = 0; i < 5; i++)
	{
		cout << "Please input an integer" << endl;
		cin >> numbers[i];
	}
	cout << endl << endl;

	//Call each function and output results
	largestNumberPosition(numbers, i, j, temp);
	cout << endl << endl;
	ascendingOrder(numbers, i, j, temp);
	cout << endl << endl;
	descendingOrder(numbers, i, j, temp);

	return 0;
}

//Order user inputted integers in ascending order
void ascendingOrder(int numbers[5], int i, int j, int temp)
{
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (numbers[j] < numbers[i])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}
}

//Order user inputted integers in descending order
void descendingOrder(int numbers[5], int i, int j, int temp)
{
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (numbers[i] < numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}
}

//Find largest element in the array and output its index
void largestNumberPosition(int numbers[5], int i, int j, int temp)
{
	temp = numbers[0];
	for ( i = 1; i < 5; i++)
	{
		if (numbers[i] > temp)
		{
			temp = numbers[i];
			j = i;
		}
	}

	cout << "The largest element in the array is: " << temp << endl;
	cout <<"The elements index is: "<< j << endl;
}