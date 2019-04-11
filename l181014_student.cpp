#include"student.h"

student :: student(string user,string nname,string roll)
{
	username=user;
	name=nname;
	roll_no=roll;
	c=new course * [2];
	max_courses=2;
	curr_course=0;
}

student::student (student & other_st)
{
	username=other_st.username;
	name=other_st.name;
	roll_no=other_st.roll_no;
	for(int i=0;i<max_courses;i++)
	{
		c[i]=other_st.c[i];
	}
	max_courses=other_st.max_courses;
	curr_course=other_st.curr_course;
}

void student::addcourse(course * c1)
{
	bool check=false;
if(curr_course<max_courses)
{
	for(int i=0;i<max_courses;i++)
	{
	  if(c[curr_course]!=c1)
	  {
	  c[curr_course]=c1;
	  curr_course++;
	  check=true;
	  }
	  	else if(check==false)
	        cout<<"Course is already added"<<endl;
	}
}
	else
		cout<<"Student has already taken max numbers of courses"<<endl;
}

ostream & operator<<(ostream & out,const student & s1)
{
	out<<s1.username<<endl;
	out<<s1.name<<endl;
	out<<s1.roll_no<<endl;
	for(int i=0;i<s1.max_courses;i++)
	{
		out<<s1.c[i]<<endl;
	}
	return out;
}

void dropcourse(course * c1);