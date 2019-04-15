#include"person_18L2181.h"
#pragma once
class student: public person
{
	float cgpa;
public:
	~student();
	student(float cgpa,string fname,string lname,int yage);
	void print();
	float getgpa();
	void setgpa(float gpa);
};