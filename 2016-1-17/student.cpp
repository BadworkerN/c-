/*************************************************************************
	> File Name: student.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 02:04:01 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;


class student
{
public:
	student()
	{
		cout<<"student()"<<endl;
	}
	~student()
	{
		cout<<"~student()"<<endl;
	}
private:
	static void * operator new(size_t);
private:
	int id_;
	char pname_[10];
};

int main(void)
{
//	student *p1=new student;
	student p;
	return 0;
}
