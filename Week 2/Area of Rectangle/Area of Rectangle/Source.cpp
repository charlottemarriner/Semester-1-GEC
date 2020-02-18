#include<iostream>
using namespace std;

int main()
{
	//Set values for integers (width, height and the product of the width and height - the areaOfRectangle)
	int width = 10, height, areaOfRectangle;
	height = 15;
	areaOfRectangle = width * height;

	//Output values for width, height and the area
	cout << "The width of the rectangle is " << width << endl;
	cout << "The height of the rectangle is " << height << endl;
	cout << "The area of a " << width << " by " << height << " rectangle is " << areaOfRectangle << endl;

	//Get user input
	cin.get();
	return 0;
}