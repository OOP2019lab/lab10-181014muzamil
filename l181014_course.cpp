#include"course.h"
#include"student.h"

course::course(string id,string name,string no)
{
	course_id=id;
	course_name=name;
	course_no=no;
	st=new student * [4]; 
	curr_st=0;
	max_st=4;
}

course::course(course & other_c)
{
	course_id=other_c.course_id;
	course_name=other_c.course_name;
	course_no=other_c.course_no;
	for(int i=0;i<max_st;i++)
	{
		st[i]=other_c.st[i];
	}
	max_st=other_c.max_st;
	curr_st=other_c.curr_st;
}

void course::addstudent(student * s1)
{
	bool check=false;
	if(curr_st<max_st)
	{
		for(int i=0;i<max_st;i++)
		{
			if(st[curr_st]!=s1)
		    {
				st[curr_st]=s1;
		        curr_st++;
				check=true;
			}
	        else if(check==false)
		    cout<<"Student already exists"<<endl;
	    }
	}
	else
		cout<<"Course is full"<<endl;
}


ostream & operator<<(ostream & out,const course & c1)
{
	out<<c1.course_no;
	out<<c1.course_id<<endl;
	out<<c1.course_name<<endl;
	for(int i=0;i<c1.max_st;i++)
	{
		out<<c1.st[i];
	}
	return out;
}

void course::addstudent_2(student * s2)
{
	bool check=false;
	if(curr_st<max_st)
	{
		for(int i=0;i<max_st;i++)
		{
			if(st[curr_st]!=s2)
		    {
				st[curr_st]=s2;
		        curr_st++;
				check=true;
			}
	        else if(check==false)
		    cout<<"Student already exists"<<endl;
	    }
	}
	else
		cout<<"Course is full"<<endl;
}
