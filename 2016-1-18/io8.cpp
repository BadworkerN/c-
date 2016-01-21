/*************************************************************************
	> File Name: io8.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 05:51:09 AM PST
 ************************************************************************/
#include<sstream>
#include<iostream>
using namespace std;

int main(void)
{
	int ival1=512;
	int ival2=1024;
	
	stringstream ss;
	ss<<"ival="<<ival1<<",ival2="<<ival2<<endl;

	string s=ss.str();
	cout<<s<<endl;
	
	while(ss>>s)
	{
		cout<<s<<endl;
	}
	return 0;
}
