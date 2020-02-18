#include<iostream>
using namespace std;

int main()
{
	//Set values for pi, radius, and areaOfCircle
	const float pi = 3.14;
	float radius, areaOfCircle;
	radius = 22, areaOfCircle = pi * radius * radius;

	//Output the area of the circle
	cout << "The area of a circle with radius " << radius << " is " << areaOfCircle << endl;

	//Get user input
	cin.get();
	return 0;
}