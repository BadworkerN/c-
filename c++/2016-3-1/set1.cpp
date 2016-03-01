/*************************************************************************
	> File Name: set1.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 29 Feb 2016 10:03:47 PM PST
 ************************************************************************/
#include<set>
#include<iostream>
using namespace std;

int main(void)
{
	int sz[9]={3,2,4,1,2,3,6,5,6};
	multiset<int,greater<int> > A(sz,sz+9);
	multiset<int>::iterator it=A.begin();
	while(it!=A.end())
	{
		cout<<*it<<' ';
		++it;
	}
	cout<<endl;

}
