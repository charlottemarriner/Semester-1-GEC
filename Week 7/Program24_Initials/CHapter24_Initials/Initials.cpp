#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Setting array and string
	char fullName[25] = "";
	string lines[25] = {" "};

	//Outputs and getting player input
	cout << "Please enter your first and middle name initials and then your full surname" << endl << endl;
	cin.getline(fullName, 25);
	cout << "Your full name is: " << fullName << endl << endl;;

	//Initialisation of variable
	int spaces = 0;

	//For length of array, any time a space is found within the array, increment spaces by 1.
	for (int i = 0; i <= strlen(fullName); i++)
	{
		if (fullName[i] == ' ')
		{
			spaces++;
		}
		lines[spaces] = lines[spaces] + fullName[i];
	}

	//Start new line where spaces are
	for (int i = 0; i <= spaces; i++)
	{
		cout << lines[i] << endl;
	}
	return 0;
}