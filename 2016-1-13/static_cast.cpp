/*************************************************************************
	> File Name: static_cast.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Tue 12 Jan 2016 08:21:51 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
	char a = 'A';
	
	double b;

	b=static_cast<double>(a);

	cout<<"a="<<a<<endl;

	cout<<"b="<<b<<endl;
	
	return 0;
}
