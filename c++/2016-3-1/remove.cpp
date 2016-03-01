/*************************************************************************
	> File Name: remove.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 01 Mar 2016 06:57:52 AM PST
 ************************************************************************/
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

void print(vector<int>::value_type v)
{
	cout<<v<<' ';
}

int main(void)
{
	vector<int> vecint;
	vecint.reserve(10);
	cout<<vecint.size()<<endl;
	cout<<vecint.capacity()<<endl;
	for(size_t i=0;i!=10;++i)
		vecint.push_back(i);
	vecint[3]=vecint[5]=vecint[9]=99;
	cout<<vecint.size()<<endl;
	for_each(vecint.begin(),vecint.end(),print);
	cout<<endl;
	vecint.erase(remove(vecint.begin(),vecint.end(),99),vecint.end());
	
	for_each(vecint.begin(),vecint.end(),print);
	cout<<endl;
}
