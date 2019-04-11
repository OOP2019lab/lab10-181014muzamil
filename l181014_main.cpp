#include"student.h"
#include"course.h"

void main()
{
	//creating 5 students by given data
	student s1("S1","Anum","11-1351");
	student s2("S2","Sara","12-6462");
	student s3("S3","Sana","11-4531");
	student s4("S4","Zara","11-4342");
	student s5("S5","Hina","11-5940");
    
	//creating 3 courses by given data
	course c1("C1","OOP","CS102");
	course c2("C2","PF","CS101");
	course c3("C3","AI","CS365");
	s1.addcourse(&c1);
	cout<<s1;
}