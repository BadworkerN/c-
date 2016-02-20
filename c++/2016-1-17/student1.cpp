/*************************************************************************
	> File Name: student.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 02:04:01 AM PST
 ************************************************************************/
#include<stdlib.h>
#include<iostream>
using namespace std;


class student
{
public:
	student()
	{
		cout<<"student()"<<endl;
	}
	void destroy()
	{
		delete this;
	}

	static void * operator new(size_t sz)
	{
		cout<<"new"<<endl;
		void * p =malloc(sz);	
	}

	static void operator delete(void * p)
	{
		cout<<"delete"<<endl;
		free(p);
	}

private:
	~student()
	{
		cout<<"~student()"<<endl;
	}
private:
	int id_;
	char pname_[10];
};

int main(void)
{
	student *p1=new student;
	p1->destroy();
//	student p;
	return 0;
}
