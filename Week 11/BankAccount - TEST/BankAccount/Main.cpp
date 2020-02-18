#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "BaseAccount.h"

int main()
{
	while (true)
	{
		cout << "1. Open an account " << endl;
		cout << "2. View an account " << endl;
		cout << "3. Close an account " << endl;
		cout << "4. Exit " << endl;
		int choice; 
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "OPEN" << endl;
			AccountSelect::AccountSelect(2);
			break;
		case 2:
			cout << "VIEW" << endl;
			break;
		case 3:
			cout << "CLOSE" << endl;
			break;
		case 4:
			return 0;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
	}
}