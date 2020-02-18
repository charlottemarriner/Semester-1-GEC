#include <iostream>
#include <string>
using namespace std;

//Initialise struct
struct Details
{
	string name, number;
	int age;
	
	void PrintDetails(Details);
};

Details personDetails (Details);


int main()
{
	//Call struct and link person1
	Details person1;

	person1 = personDetails(person1);
	person1.PrintDetails(person1);

	return 0;
}

//Output details of person 1
void Details::PrintDetails(Details person1)
{
	cout << "Name: " << person1.name << endl;
	cout << "Age: " << person1.age << endl;
	cout << "Number: " << person1.number << endl;
}

//Get user input for person 1
Details personDetails(Details person1)
{
	cout << "Please enter your name: " << endl;
	cin >> person1.name;
	cout << "Please enter your age: " << endl;
	cin >> person1.age;
	cout << "Please enter your telephone number: " << endl;
	cin >> person1.number;

	return person1;
}
