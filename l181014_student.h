#include<iostream>
#include<string>
using namespace std;
class course;
#ifndef STUDENT_H
#define STUDENT_H



class student
{
	string username;
	string name;
	string roll_no;
	course ** c;
	int max_courses;
	int curr_course;
public:
	student(string username,string name,string rool_no);
	student (student & other_st);
	friend ostream & operator<<(ostream & out,const student & s1);
	void addcourse(course * c1);
	void dropcourse(course * c1);
};

#endif // !STUDENT_H
