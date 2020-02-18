#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialise variables
	string name1 = "";
	string name2 = "";
	bool isNameLonger = false;
	string sentenceToChange = "Do you know who loves C++ XX does!";

	//Output and input
	cout << sentenceToChange << endl;
	cout << "Enter your name: " << endl;
	getline(cin, name1);

	//Find the location of "XX" and replace the position of this (2 characters total) and replace this with name1
	int position = sentenceToChange.find("XX");
	sentenceToChange.replace(position, 2, name1);

	//Output
	cout << sentenceToChange << endl;

	//While isNameLonger false, as user to input name longer than the first and check if name2 is longer than name1
	do {
		cout << "Please input a longer name than the first: " << endl;
		getline(cin, name2);
		if (name2.length() <= name1.length())
			cout << "This name is not longer" << endl;
		else
			isNameLonger = true;
	} while (!isNameLonger);

	//Once longer name inputted, find name1 in sentence and replace it with name2
	position = sentenceToChange.find(name1);
	sentenceToChange.replace(position, name1.length(), name2);

	//Output the results
	cout << sentenceToChange << endl;

	return 0;
}