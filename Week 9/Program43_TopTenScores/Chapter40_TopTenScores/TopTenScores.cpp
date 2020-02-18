#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	
	int playerNum;
	string playerNames[10];
	int playerScores[10];

	cout << "1. Enter a score" << endl;
	cout << "2. Display scores" << endl;
	cout << "3. Exit" << endl;
	cin >> playerNum;

		if (playerNum == 1)
		{
			cout << "Please enter your name" << endl;
			cin >> playerNames[0];
			cout << endl;

			cout << "Please enter your score" << endl;
			cin >> playerScores[0];
			cout << endl;

			ofstream outfile("scores.txt", ios::in | ios::app);

			//Check if file was opened
			if (!outfile.is_open())
			{
				cerr << "File could not be opened.";
				std::exit(1);
			}
			//To rech here the file must be open
			//Write to the open file
			outfile << playerNames[0] << setw(15) << playerScores[0] << "\n";

			//Close the file
			outfile.close();
		}
		else if (playerNum == 2)
		{
			string lineOfText;
			ifstream infile("scores.txt");

			//Check if the file was opened
			if (infile.is_open())
			{
				//Loop through the entire file and output each line to the console
				while (getline(infile, lineOfText))
				{
					cout << lineOfText << endl;
				}
				//Close the file
				infile.close();
			}
			else
			{
				//File did not open. Inform the user
				cout << "Unable to open file";
			}

			cin.get();
		}
		else if (playerNum == 3)
		{
			return 0;
		}

}