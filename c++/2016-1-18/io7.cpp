/*************************************************************************
	> File Name: io7.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 05:36:22 AM PST
 ************************************************************************/
#include<fstream>
#include<iostream>
using namespace std;

int main(void)
{
	fstream file("f1.dat",ios::out|ios::in);
	if(!file.good())
	{
		cout<<"open file error"<<endl;
		return -1;
	}
	int ival;
	for (size_t i=0;i!=5;i++)
	{
		cin>>ival;
		file<<ival<<' ';

	}
	cout<<file.tellg()<<endl;

	file.seekg(2,ios::beg);

	for(size_t i=0 ;i!=5  ;i++)
	{
		file>>ival;
		cout<<ival<<' ';

	}
	file.close();
}

