/*************************************************************************
	> File Name: template_overload.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 25 Feb 2016 11:23:12 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
T MAX(T x,T y);

int MAX(int x,int y)
{
	return (x>y? x:y);
}
template<typename T>
T MAX(T x, T y,T z)
{
	return x>y?(x>z? x:z):(y>z?y:z);
}
int main(void)
{
	int iva1=1,ival2=2;
	double dval1=3.9,dval2=2.9,dval3=4.9;
	cout<<MAX(iva1,ival2)<<endl;
	cout<<MAX(dval1,dval2)<<endl;
	cout<<MAX(dval1,dval2,dval3)<<endl;
	cout<<MAX<char>('A','8')<<endl;
}

template<typename T>
T MAX(T x,T y)
{
	return (x>y? x:y);
}

