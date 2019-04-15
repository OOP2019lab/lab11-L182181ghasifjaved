#include"person_18L2181.h"
person::~person()
{
	cout<<"\n~person() invocked\n";
}
person::person(string fname,string lname,int yage)
{
	this->first_name=fname;
	this->last_name=lname;
	this->age=yage;
	cout<<"\nperson() was invoked\n";
}
void person::print()
{
	cout<<"\nthe first name is : \n"<<first_name;
	cout<<"\nthe last name is : \n"<<last_name;
	cout<<"\nage : \n"<<age;
}
string person::getfirst()
{
	return first_name;
}
void person::setfirst(string first)
{
	this->first_name=first;
}
string person::getlast()
{
	return last_name;
}
void person::setlast(string last)
{
	this->last_name=last;
}
void person::setage(int yage)
{
	this->age=yage;
}
int person::getage()
{
	return age;
}