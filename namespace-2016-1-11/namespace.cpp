/*************************************************************************
	> File Name: namespace.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Mon 11 Jan 2016 06:30:44 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace A
{
	void displayA()
	{
		cout<<"this is A"<<endl;
	}
}

namespace B
{
	void displayB()
	{
		A::displayA();
		cout<<"this is B"<<endl;
	}
}

int main(void)
{
	B::displayB();

	return 0;
}
