/*************************************************************************
	> File Name: iterator_istream.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 01 Mar 2016 05:22:18 AM PST
 ************************************************************************/
#include<iterator>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> vecint;
	istream_iterator<int,char> isi(cin);
	copy(isi,istream_iterator<int,char>(),back_inserter(vecint));
	vector<int>::iterator it=vecint.begin();
	while(it!=vecint.end())
	{
		cout<<*it<<" ";
		++it;
	}
	cout<<endl;
}
