#include <iostream>
#include <fstream>
#include <string>
#include "BaseAccount.h"
#include "JuniorAccount.h"
#include "SavingsAccount.h"
#include "Core.h"

AccountSelect::AccountSelect(int test)
{
	bool invalid = true;
	do {
		cout << "1. General account." << endl;
		cout << "2. Junior account." << endl;
		cout << "3. Savings account." << endl;
		cout << "4. Back to main menu." << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Create General Account" << endl;
			invalid = true;
			break;
		case 2:
			cout << "Create Junior Account" << endl;
			invalid = true;
			break;
		case 3:
			cout << "Create Savings Account" << endl;
			invalid = true;
			break;
		case 4:
			cout << "EXIT Menu" << endl;
			invalid = false;
			break;
		default:
			cout << "Invalid Input" << endl;
			invalid = true;
			break;
		}
	} while (invalid == true);
}

AccountSelect::~AccountSelect()
{
}