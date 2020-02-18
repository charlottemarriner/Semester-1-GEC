#include<iostream>
using namespace std;

int main()
{
	typedef int date;

	enum Month
	{
		JANUARY = 1,
		FEBRUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};

	date currentDate = 15;
	Month currentMonth = APRIL;

	cout << "The current date is the " << currentDate << "th day of the " << currentMonth <<"th month"<< endl;

	cin.get();
	return 0;
}