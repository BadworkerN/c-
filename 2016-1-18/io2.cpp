/*************************************************************************
	> File Name: io2.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 04:18:32 AM PST
 ************************************************************************/
#include<limits>
#include<iostream>
using namespace std;

int main(void)
{
	int ival;
	while(cin>>ival ,!cin.eof())
	{
		if(cin.bad())
		{
			cout<<"to stream corrupted"<<endl;
			return -1;
		}
		if(cin.fail())
		{
			cout<<"illegal data ,try again!"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max() ,'\n');
			continue;
		}
		cout<<ival<<endl;
	}
}
