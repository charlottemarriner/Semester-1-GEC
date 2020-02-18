#include <iostream>
using namespace std;

#include <windows.h>

//Multi-dimensional array
char square[3][10] = {
{'0','1','2','3','4','5','6','7','8','9'}, //Card Number
{'A','B','C','D','E','A','B','C','D','E'}, // Card Face
{'0','1','2','3','4','5','6','7','8','9'} //What is shown to player
};

char selectedCards[1];
int points = 0;

//Functions
int checkForMatch(char firstCard, char secondCard);
int checkForWin();
void drawBoard();
void chooseACard(int chosenCard);


int main()
{
	int gameStatus;
	int chosenCard=0;
	char firstCard, secondCard;
	
	//Draw board and run functions as long as the game is still in progress
	do
	{
		drawBoard();
		chooseACard(chosenCard);

		firstCard = square[1][selectedCards[0]];
		secondCard = square[1][selectedCards[1]];

		checkForMatch(firstCard, secondCard);

		
	

		//Check if we have a winner
		gameStatus = checkForWin();
	} while (gameStatus == -1);

	drawBoard();

	//Game must be in state of 1 or 0, which one was it
	if (gameStatus == 1)
	{
		cout << "==>Player win" << endl;
		cout <<"The player has: "<< points << endl;
	}
	

	cin.ignore();
	cin.get();
	return 0;
}

//Checks if all cards have been matched for the win
int checkForWin()
{
	//Return Game Status
	//1= game win
	//-1=game still in progress
	//0 game over with draw
	if(square[2][0]==square[2][5]&&square[2][1]==square[2][6]&& square[2][2]
		== square[2][7] && square[2][3] == square[2][8] && square[2][4] == square[2][9])
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

//Draws the cards
void drawBoard()
{
	system("cls");
	cout << endl << endl << "Match the cards" << endl << endl;
	cout << "Choose two cards, if the letters on the underside of the cards match, the cards will flip and remain on show";
	cout<<endl << endl;
	
	cout << " " << square[2][0] << "   |   " << square[2][1] << "   |   " << square[2][2] << "   |   " << square[2][3] << "   |   " << square[2][4] << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;
	cout<< " " << square[2][5] << "   |   " << square[2][6] << "   |   " << square[2][7] << "   |   " << square[2][8] << "   |   " << square[2][9] << endl;
	
}

//Allows the player to choose two cards and turns them both face up if they match
void chooseACard(int chosenCard)
{
	int choice;
	char mark;

	for (int i = 0; i < 2; i++)
	{
		cout << "Player please enter a number: ";


		cin >> choice;
		selectedCards[i] = choice;

		if (choice == 0 && square[2][0] == '0')
		{
			mark = 'A';
			square[2][0] = mark;
		}
		else if (choice == 1 && square[2][1] == '1')
		{
			mark = 'B';
			square[2][1] = mark;
		}
		else if (choice == 2 && square[2][2] == '2')
		{
			mark = 'C';
			square[2][2] = mark;
		}
		else if (choice == 3 && square[2][3] == '3')
		{
			mark = 'D';
			square[2][3] = mark;
		}
		else if (choice == 4 && square[2][4] == '4')
		{
			mark = 'E';
			square[2][4] = mark;
		}
		else if (choice == 5 && square[2][5] == '5')
		{
			mark = 'A';
			square[2][5] = mark;
		}
		else if (choice == 6 && square[2][6] == '6')
		{
			mark = 'B';
			square[2][6] = mark;
		}
		else if (choice == 7 && square[2][7] == '7')
		{
			mark = 'C';
			square[2][7] = mark;
		}
		else if (choice == 8 && square[2][8] == '8')
		{
			mark = 'D';
			square[2][8] = mark;
		}
		else if (choice == 9 && square[2][9] == '9')
		{
			mark = 'E';
			square[2][9] = mark;
		}
		else
		{
			cout << "Invalid move";
		}
	}
}

//Checks to see if the cards are matching
int checkForMatch(char firstCard, char secondCard)
{

	if (firstCard == secondCard)
	{
		points++;
		return 2;
	}
	else if (firstCard != secondCard)
	{
		square[2][selectedCards[0]] = square[0][selectedCards[0]];
		square[2][selectedCards[1]] = square[0][selectedCards[1]];
		return 3;
	}
}