/*************************************************************************
	> File Name: namespace3.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Mon 11 Jan 2016 07:07:41 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

//extern int num=0;
int num =0;

void disp()
{
	cout<<"::disp()"<<endl;
}
namespace B
{
	int num=2;

}

namespace A
{
	int num=1;
	void dispA()
	{
		int num=3;
		cout<<"A::dispA num="<<num<<endl;
		cout<<"A::num="<<A::num<<endl;
		cout<<"B::num="<<B::num<<endl;
		cout<<"extern num="<<::num<<endl;
		disp();
	}
}

int main(void)
{
	A::dispA();
	return 0;
}
