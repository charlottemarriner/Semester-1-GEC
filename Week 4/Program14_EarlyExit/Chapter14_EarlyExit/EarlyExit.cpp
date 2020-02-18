#include <iostream>
using namespace std;

int main()
{
	//Initalise and set variables
	int playerLife = 100;
	int damage;

	//While player life is greater than 0, carry out the following
	for (int i = 1; playerLife > 0; i++)
	{
		//Ask player how much health to decrease by, get user input
		cout << "Player life is equal to " << playerLife << endl;
		cout << "Question " << i << ": How much should we decrease the health by? " << endl;
		cin >> damage;
		playerLife = playerLife - damage;

		//When 10 questions have been asked, break the for loop
		if (i == 10)
		{
			cout << "All 10 questions asked and player still has life remaining" << endl;
			break;
		}
	}

	//If playerLife is equal to or less than 0, output the following
	if (playerLife<=0)
		cout << "Early Exit." << endl;
}