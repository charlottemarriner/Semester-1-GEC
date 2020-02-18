#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	const int choices = 3;
	string words[choices] = { "Rock",
							  "Paper",
							  "Scissors" };
	//Initialise random seed
	srand((unsigned int)time(NULL));

	int playerScore = 0, compScore = 0;
	string playerChoice;

	cout << "---ROCK, PAPER, SCISSORS----" << endl << endl;

	//Game Loop
	while ((playerScore < 3) && (compScore < 3))
	{
		//Get random number for this game (for comps choice)
		string compChoice = words[rand() % choices];

		cout << "Enter your selection: ";
		cin >> playerChoice;
		cout << endl;
		cout << "You chose: " << playerChoice << endl;
		cout << "The computer chose: " << compChoice << endl;


		//Check for who won round
		if (compChoice == "Rock" && (playerChoice == "Rock" || playerChoice == "rock"))
		{
			cout << "It was a draw." << endl;
		}
		else if (compChoice == "Rock" && (playerChoice == "Paper"|| playerChoice == "paper"))
		{
			cout << "Congratulations, you win!" << endl;
			playerScore++;
		}
		else if (compChoice == "Rock" && (playerChoice == "Scissors"|| playerChoice == "scissors"))
		{
			cout << "The computer wins." << endl;
			compScore++;
		}
		else if (compChoice == "Paper" && (playerChoice == "Rock" || playerChoice == "rock"))
		{
			cout << "The computer wins." << endl;
			compScore++;
		}
		else if (compChoice == "Paper" && (playerChoice == "Paper" || playerChoice == "paper"))
		{
			cout << "It was a draw." << endl;
		}
		else if (compChoice == "Paper" && (playerChoice == "Scissors" || playerChoice == "scissors"))
		{
			cout << "Congratulations, you win!" << endl;
			playerScore++;
		}
		else if (compChoice == "Scissors" && (playerChoice == "Rock" || playerChoice == "rock"))
		{
			cout << "Congratulations, you win!" << endl;
			playerScore++;
		}
		else if (compChoice == "Scissors" && (playerChoice == "Paper" || playerChoice == "paper"))
		{
			cout << "The computer wins." << endl;
			compScore++;
		}
		else if (compChoice == "Scissors" && (playerChoice == "Scissors" || playerChoice == "scissors"))
		{
			cout << "It was a draw." << endl;
		}
	
		cout << "You need: " << (3 - playerScore) << " to complete the game." << endl;
		cout << "The computer needs: " << (3 - compScore) << " to complete the game." << endl;
		cout << "************************" << endl;
	}
}