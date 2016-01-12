/*************************************************************************
	> File Name: namespace2.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Mon 11 Jan 2016 06:45:18 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace A
{
	int num=10;
	void dispA()
	{	
		cout<<"this is A"<<endl;
	}

}

using A::dispA;

void dispex()
{
	using A::num;
	cout<<"this is outsideEX"<<endl;
	cout<<"A::num="<<num<<endl;
}

namespace B
{
	void dispB()
	{
		dispA();
		dispex();
		cout<<"this is B"<<endl;
	}
}

using B::dispB;

int main(void)
{
	dispB();
	dispA();
}
