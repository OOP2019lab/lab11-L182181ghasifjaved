#include <iostream>
#include <string>
using namespace std;
#pragma once
class person
{
	string first_name;
	string last_name;
protected:
	int age;
public:
	~person();
	person(string fname,string lname,int yage);
	void print();
	string getfirst();
	void setfirst(string first);
	string getlast();
	void setlast(string last);
	void setage(int yage);
	int getage();
};