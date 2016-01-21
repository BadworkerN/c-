/*************************************************************************
	> File Name: io5.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 05:11:00 AM PST
 ************************************************************************/
#include<string>
#include<fstream>
#include<iostream>
using namespace std;


int main(void)
{
	//ofstream ofs("test1.txt",ios::app);
	ofstream ofs("test1.txt",ios::ate);
	if(!ofs.good())
	{
		cout<<"open file error"<<endl;
		return -1;
	}
	cout<<ofs.tellp()<<endl;
	ofs<<"this is new"<<endl;
	ofs.close();
}
