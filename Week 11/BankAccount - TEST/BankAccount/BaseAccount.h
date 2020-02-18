#pragma once
#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H
#include <iostream>
using namespace::std;

class BaseAccount
{

};
#endif

class AccountSelect
{
public:
	AccountSelect(int test);
	~AccountSelect();
private:
	int test;
};

class AccountDetails
{
public:
	AccountDetails(string forname, string surname, string address, int deposit);
	~AccountDetails()
};

enum AccountType
{
	GENERAL,
	JUNIOR,
	SAVINGS
};