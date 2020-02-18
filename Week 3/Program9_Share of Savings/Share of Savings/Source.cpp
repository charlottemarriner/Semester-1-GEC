#include<iostream>
using namespace std;

int main()
{
	//Set values for mySavings and yourPercentage
	int mySavings = 2000;
    float yourPercentage = 50;
	//Set value for yourShare by using other variables
    int yourShare = (mySavings * (yourPercentage / 100));
	
	//Output yourShare
	cout << "Your share: " << yourShare << endl;
	
	//Get user input
	cin.get();
	return 0;
}