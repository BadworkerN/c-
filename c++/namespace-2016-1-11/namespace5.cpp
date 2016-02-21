/*************************************************************************
	> File Name: namespace5.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Mon 11 Jan 2016 07:38:01 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

extern int num =0;
namespace A
{
	int num =1;
	namespace B
	{
		int num=2;
		void disp()
		{
			int num=3;
			cout<<"A::B::disp::num="<<num<<endl;
			cout<<"A:B::num="<<A::B::num<<endl;
			cout<<"A::num="<<A::num<<endl;
			cout<<"::num="<<::num<<endl;
		}
	}
}

int main(void)
{
	A::B::disp();

	return 0;
}
