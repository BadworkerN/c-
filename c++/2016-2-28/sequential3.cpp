/*************************************************************************
	> File Name: sequential3.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 28 Feb 2016 12:25:54 AM PST
 ************************************************************************/
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main(void)
{
	vector<string> vec;
	vec.reserve(10);
	vec.push_back("this is A");

	vector<string>::iterator it=vec.begin();
	 
	int i=9;
	while(it!=vec.end())
	{
		cout<<vec.capacity()<<endl;
		cout<<*it<<endl;
		++it;
		
		if(i==9)
		{
			vec.push_back("this is B");
		}
		i=8;
	}
}
