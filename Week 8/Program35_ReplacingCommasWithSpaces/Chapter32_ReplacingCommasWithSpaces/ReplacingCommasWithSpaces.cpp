#include <iostream>

using namespace std;

//Initialise function
void comma2blank(char* pTextToChange);

int main()
{
	//Initialise and set array
	char textToChange[30];

	//Get player input
	cout << "Please enter a sentence" << endl;
	cin.getline(textToChange, 29);

	//Call function
	comma2blank(textToChange);

	cout << textToChange;

	cin.get();
	return 0;
}

void comma2blank(char* TextToChange)
{
	//Go through entire string, and replace any commas with a blank space
	for (int i = 0; i <= strlen(TextToChange); i++)
	{
		if (TextToChange[i + 1] == ',')
		{
			TextToChange[i + 1] = ' ';
		}
	}
}
