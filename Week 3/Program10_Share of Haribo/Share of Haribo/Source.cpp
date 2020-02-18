#include<iostream>
using namespace std;

int main()
{
	//Set values of all int variables
	int numberOfHaribos = 40;
	int numberOfHaribosdivide = 40;
	int numberOfLeeches = 14;
	int studentHaribo = 40 / 14;
	int lecturerHaribo = (numberOfHaribosdivide %= numberOfLeeches);

	//Output values of each variable
	cout << "Number of Haribo packets is " << numberOfHaribos << endl;
	cout << "Number of students present is " << numberOfLeeches << endl;
	cout << "The students get " << studentHaribo << " each" << endl;
	cout << "The lecturer gets " << lecturerHaribo << endl;

	//Get user input
	cin.get();
	return 0;

}