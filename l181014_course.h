#include<iostream>
#include<string>
using namespace std;
class student;
#ifndef COURSE_H
#define COURSE_H



class course
{
	string course_id;
	string course_name;
	string course_no;
	student ** st;
	int curr_st;
	int max_st;
	void addstudent(student * s1);
	friend class student;
public:
	course(string course_id,string course_name,string course_no);
	course(course & other_st);
	friend ostream & operator<<(ostream & out,const course & c1);
	void addstudent_2(student * s2);
};
#endif // !COURSE_H
