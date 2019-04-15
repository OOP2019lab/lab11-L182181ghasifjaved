#include"person_18L2181.h"
#include"student_18l2181.h"
student::~student()
{
	cout<<"\n~student() was invoked\n";
}
student::student(float cgpa,string fname,string lname,int yage):person(fname,lname,yage)
{
	this->cgpa=cgpa;
	cout<<"\nthe student() was invoked\n";
}
void student::print()
{
	person::print();
	cout<<"\nthe  cgpa : \n"<<cgpa;
}
float student::getgpa()
{
	return cgpa;
}
void student::setgpa(float gpa)
{
	cgpa=gpa;
}