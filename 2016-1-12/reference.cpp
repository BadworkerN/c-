/*************************************************************************
	> File Name: reference.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Tue 12 Jan 2016 01:04:05 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

int & fun(int a)
{
	int * p = new int (a);

	return *p;
}

int main(void)
{
	int a=10;
	int &ref=a;

	cout<<"ref="<<ref<<endl;

	ref=20;
	
	cout<<"ref="<<ref<<endl;
	cout<<"val="<<a<<endl;

	int b=30;
	ref=b;
	cout<<"ref="<<ref<<endl;
	cout<<"val="<<a<<endl;

	int c =50;
	const int refa=40;
	cout<<"refa="<<refa<<endl;

	cout<<"a="<<a<<endl;
	cout<<"c="<<c<<endl;

	swap(a,c);
	cout<<"a="<<a<<endl;
	cout<<"c="<<c<<endl;


	cout<<"fun(3)="<<fun(3)<<endl;
	
	delete &fun(3);
	
	
	return 0;
}
