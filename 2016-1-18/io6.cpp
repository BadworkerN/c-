/*************************************************************************
	> File Name: io6.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 05:26:40 AM PST
 ************************************************************************/
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

int main(void)
{
	ifstream ifs("test1.txt",ios::ate);
	if(!ifs.good())
	{
		cout<<"open file error"<<endl;
		return -1;
	}
	cout<<ifs.tellg()<<endl;
}
