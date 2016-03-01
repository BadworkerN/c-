/*************************************************************************
	> File Name: associativa.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 29 Feb 2016 11:19:54 PM PST
 ************************************************************************/
#include<map>
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	pair<int ,string> pairs[2]={
		pair<int,string>(1,"A"),
		pair<int,string>(2,"B")};
	map<int,string> mapistr(pairs,pairs+2);
	pair<int,string> t(2,"X");
	pair<map<int,string>::iterator,bool> res=
		mapistr.insert(t);
	if(res.second)
		cout<<"insert success"<<endl;
	else
	{
		cout<<"insert false:"
			<<(res.first)->second
			<<" has alreadly exist!"
			<<endl;

	}
}
