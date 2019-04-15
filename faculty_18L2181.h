#include"person_18L2181.h"
#pragma once
class faculty: public person
{
	int course_count;
	int telenum;
public:
	~faculty();
	faculty(int course,int num,string fname,string lname,int yage);
	void print();
	int getcount();
	void setcount(int count);
	int getnum();
	void setnum(int num);
};