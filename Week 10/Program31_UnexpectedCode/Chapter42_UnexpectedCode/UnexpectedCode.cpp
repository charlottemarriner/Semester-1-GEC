#include <iostream>
using namespace std;

int main()
{
	int count = 3;
	int i;
	for (int i=1; i<=count; i++)
	{
		cout << i;
		if (i == 2)
			cout << " is an even number" << endl;
		else
			cout << " is an odd number" << endl;
	}

	// Pause the output
	cin.get();

	return 0;
}
