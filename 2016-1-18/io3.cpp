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
	fstream ifs("io1.cpp");
	if(!ifs.good())
	{	
		cout<<"open file erro"<<endl;
		return -1;
	}
	string s;
//	while(ifs>>s)
	vector<string> vec_str;
	while(getline(ifs,s))
	{
		vec_str.push_back(s);
	//	cout<<s<<endl;
	}

	for(size_t i=0;i<5;i++)
	{
		cout<<vec_str[i]<<endl;
	}

	vector<string>::iterator it;
	for(it=vec_str.begin();it!=vec_str.end();it++)
	{
		cout<<*it<<endl;
	}

	ifs.close();
	return 0;
}
