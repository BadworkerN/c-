/*************************************************************************
	> File Name: demo.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 06:58:37 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class Demo
{public:
	double operator()(double x,double y)
	{
		return x>y? x:y;
	}
	double operator()(double x,double y,double z)
	{
		return (x+y)*z;
	}
};

int main(void)
{
	Demo de;
	cout<<"max<2.5,0.2>="<<de(2.5,0.2)<<endl;
	cout<<de(1.2 ,1.5 ,7.0)<<endl;
}

