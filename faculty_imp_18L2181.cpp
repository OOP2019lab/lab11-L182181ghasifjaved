#include"person_18L2181.h"
#include"faculty_18L2181.h"

faculty::~faculty()
{
	cout<<"\n~faculty() was invoked\n";
}
faculty::faculty(int course,int num,string fname,string lname,int yage):person(fname,lname,yage)
{
	course_count=course;
	telenum=num;
	cout<<"\nfaculty() was inbvoked\n";
}
void faculty::print()
{
	person::print();
	cout<<"\nthe number of courses : \n"<<course_count;
	cout<<"\nthe telephone code : \n"<<telenum;
}
int faculty::getcount()
{
	return course_count;

}
void faculty::setcount(int count)
{
	course_count=count;
}
int faculty::getnum()
{
	return telenum;
}
void faculty::setnum(int num)
{
	telenum=num;
}