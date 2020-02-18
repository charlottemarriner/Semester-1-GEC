#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
	int myNumbers[10];

	//initialise elements of the array
	for (int i = 0; i < 10; i++)
		myNumbers[i] = i;

	//Output titles
	cout << "Array element " << setw(10) << " Stored value " << endl;

	//Output each array element's value
	for (int i = 0; i < 10; i++)
		cout << setw(5) << i << setw(20) << myNumbers[i] << endl;

	return 0;
		
}