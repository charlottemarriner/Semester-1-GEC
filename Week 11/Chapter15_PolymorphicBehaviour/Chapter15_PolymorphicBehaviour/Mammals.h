//Mammals.h
#ifndef MAMMALS_H
#define MAMMALS_H
#include <iostream>
using namespace::std;

//Mammal class - Our base class.
class Mammal
{
public:
	Mammal() :itsAge(1) {}
	~Mammal() {}

	virtual void Speak() const { cout << "Mammal speak!" << endl; }

protected:
	int itsAge;
};

//Dog Class
class Dog :public Mammal
{
public:
	void Speak() const { cout << "Woof!" << endl; }
};

//Cat Class
class Cat :public Mammal
{
public:
	void Speak() const { cout << "Meow!" << endl; }
};

//Horse Class
class Horse : public Mammal
{
public:
	void Speak() const { cout << "Neigh!" << endl; }
};

//Pig Class
class Pig : public Mammal
{
public:
	void Speak() const { cout << "Oink!" << endl; }
};

#endif //MAMMALS_H