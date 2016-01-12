/*************************************************************************
	> File Name: const.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Mon 11 Jan 2016 10:35:41 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
	const int val1=10;

	cout<<"val1="<<val1<<endl;

	int val2=20;

	const int val3=val2;

	cout<<"val3="<<val3<<endl;

	const int *p =&val2;

	//*p=30;  error
	p=&val1;
	
	cout<<"*p="<<*p<<endl;

	int * const q =&val2;

	//q=&val1;  error
	*q=30;
	cout<<"*q="<<*q<<endl;
	cout<<"val2="<<val2<<endl;

	const int * const r=&val2;

//	*r=30;   error
//	r=&val3;  error
	return 0;
}
