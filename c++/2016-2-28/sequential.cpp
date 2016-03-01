/*************************************************************************
	> File Name: sequential.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sat 27 Feb 2016 11:09:17 PM PST
 ************************************************************************/
#include<vector>
#include<list>
#include<deque>
#include<iostream>
using namespace std;

int main(void)
{
	vector<int> vecint;
	cout<<vecint.size()<<endl;

	double sz[5]={1,2,3,4,5};
	deque<double> deqdbl(sz,sz+5);//[)
	for(size_t idx=0;idx!=deqdbl.size();++idx)
		cout<<deqdbl[idx]<<' ';
	cout<<endl; 

	deque<double>::const_iterator it=deqdbl.begin();//can not write
	for(;it!=deqdbl.end();++it)
		cout<<*it<<' ';
	cout<<endl;
#if 0   //g++ ... -std=c++11
	list<float> listflt(3,5);
	for(auto fval:listflt)
		cout<<fval<<' ';
	cout<<endl;
#endif
	list<float> listflt(3,5);
	list<float>::iterator iter=listflt.begin();
	while(iter!=listflt.end())
	{
		(*iter)+=2;
		cout<<*iter<<' ';
		++iter;
	}
	cout<<endl;

	list<float> listflt2(4,9);
	listflt2.swap(listflt);
	list<float>::iterator iter1=listflt.begin();
	while(iter1!=listflt.end())
	{
		cout<<*iter1<<' ';
		++iter1;
	}
	cout<<endl;
}
