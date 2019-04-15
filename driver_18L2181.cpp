#include"person_18L2181.h"
#include"student_18l2181.h"
#include"faculty_18L2181.h"
int main()
{
	student s(3.91,"Ted","Thompson",22);
	faculty f(2,420,"richard","karp",45);
	s.print();
	f.print();
	cout<<endl;
	system("pause");
	return 0;
}