/*************************************************************************
	> File Name: set.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 29 Feb 2016 09:52:31 PM PST
 ************************************************************************/
#include<set>
#include<iostream>
using namespace std;

int main(void)
{
	int sz[3]={2,1,3};
//	set<int> A(sz,sz+3);
	set<int,greater<int> > A(sz,sz+3);
	set<int>::iterator it=A.begin();	
	while(it!=A.end())
	{
		cout<<*it<<' ';
		++it;
	}
	cout<<endl;
}
