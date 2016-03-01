/*************************************************************************
	> File Name: template2.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 25 Feb 2016 12:54:45 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
T MAX(T x,T y);

int main(void)
{
	int ival1=1 ,ival2=2;
	double dval1=3.9,dval2=2.9;
	cout<<MAX(ival1,ival2)<<endl;
	cout<<MAX<double>(dval1,dval2)<<endl;
}
 
template<typename T>
T MAX(T x ,T y)
{
	return (x>y?x:y);
}
