#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

//Initialise functions
void menuScreen(int& input);
void enterScore(int& score, string& name);
void displayScore(ifstream& file);
void organiseBoard(ifstream& fromFile, ofstream& toFile);

//Initialise and set variables and array
string content;
string scores[10];
int playerInput;
int playerScore;
string playerName;
ofstream textInput;
ifstream textOutput;

int main()
{
	while (true)
	{
		//Call function
		menuScreen(playerInput);
		//When user input is 1
		if (playerInput == 1) //Add score
		{
			enterScore(playerScore, playerName); //Call function
			cout << "Score: " << playerScore << " | Name: " << playerName << "\n" << endl; //Output the same score and name to user

			textInput.open("scores.txt.", ios::app); //Append text file to add new name and score
			textInput << playerScore << " " << playerName << "\n";
			textInput.close();

			cin.ignore();
			cin.get();
			cin.clear();
			cin.ignore();
		}
		//When user input 2
		else if (playerInput == 2) //Display score
		{
			textInput.open("scores.txt.", ios::app); //Open txt file
			textInput << 0 << " " << " " << "\n";
			textInput.close();

			//Call functions
			organiseBoard(textOutput, textInput);
			displayScore(textOutput);
		}
		//When user input 3
		else if (playerInput == 3) //Exit program
		{
			cout << "Now closing." << endl;

			return 0;
		}
	}
}

void menuScreen(int& input)
{
	system("cls");
	cout << "1. Enter a score" << endl;
	cout << "2. Display scores" << endl;
	cout << "3. Exit" << endl;
	cin >> input;
}

void enterScore(int& score, string& name)
{
	bool invalid = true;

	system("cls");
	do
	{
		cout << "Enter a score: " << endl;
		cin >> score;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Input a valid score as an integer" << endl;
		}
		else
		{
			invalid = false;
		}
	} while (invalid);

	invalid = true;

	cin.clear();
	cin.ignore();

	do
	{
		cout << "Enter name: " << endl;
		cin >> name;
		if (name.find_first_of("0123456789") >= 0 && name.find_first_of("0123456789") <= name.length())
		{
			cout << "Name must not contain any numbers" << endl;
		}
		else invalid = false;
	} while (invalid);
}

void displayScore(ifstream& file)
{
	system("cls");
	string lineOfText;
	int line = 1;
	file.open("scores.txt.");
	cout << "Displaying scores " << endl;
	if (file.is_open())
	{
		while (getline(file, lineOfText))
		{
			cout << line++;
			cout << ": ";
			cout << lineOfText << endl;
		}
		file.close();

		cin.ignore();
		cin.get();
		cin.clear();
		cin.ignore();
	}
	else
	{
		cout << "Couldn't locate file" << endl;
		cin.ignore();
		cin.get();
		cin.clear();
		cin.ignore();
	}
}

void organiseBoard(ifstream& fromFile, ofstream& toFile)
{
	string holdingArray[11];
	string content;
	int line = 0;

	//Put into array
	fromFile.open("scores.txt.");
	if (fromFile.is_open())
	{
		while (getline(fromFile, content))
		{
			if (line <= 10)
				holdingArray[line++] = content;
		}
	}
	fromFile.close();

	//Sort array
	string tempSwitch;
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			int a = stoi(holdingArray[i]);
			int b = stoi(holdingArray[j]);

			if (i == j)
			{
			}
			else if (a >= b)
			{
				tempSwitch = holdingArray[i];
				holdingArray[i] = holdingArray[j];
				holdingArray[j] = tempSwitch;
			}
		}
	}

	//Replace text with array

	toFile.open("scores.txt.", ios::trunc);
	for (int i = 0; i <= 9; i++)
	{
		toFile << holdingArray[i] << "\n";
	}
	toFile.close();
}