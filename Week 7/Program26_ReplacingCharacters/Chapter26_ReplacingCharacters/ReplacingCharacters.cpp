#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialise the string
	string input = "";

	//Output 
	cout << "Please enter a sentence" << endl;

	//Get entire line of users input
	getline(cin, input);

	//For the length of the string, swap E/e with X at the location (input.at) of i-1. 
	for (int i = 1; i <= input.length(); i++)
	{
		char swap = input.at(i - 1);
		if (swap == 'e' || swap == 'E')
			input.replace(i - 1, 1, "X");
	}

	//Output the new sentence
	cout << endl << input;

	return 0;
}