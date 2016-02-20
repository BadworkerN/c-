/*************************************************************************
	> File Name: io3.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 04:26:42 AM PST
 ************************************************************************/
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ifstream ifs("io1.cpp");
	if(!ifs.good())
	{	
		cout<<"open file error"<<endl;
		return -1;
	}
	ofstream ofs("test.txt");
	if(!ofs.good())
	{
		cout<<"ofstream error"<<endl;
		return -1;
	}
	string s;
	while(getline(ifs,s))
	{
		ofs<<s<<endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
