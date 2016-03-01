/*************************************************************************
	> File Name: map.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 29 Feb 2016 10:45:40 PM PST
 ************************************************************************/
#include<map>
#include<iostream>
using namespace std;

int main(void)
{
	pair<int,string> t(1000,"filco");
	cout<<t.second<<":"<<t.first<<endl;

	pair<int,string> pairs[4]={pair<int,string>(1,"ASIA"),
							   pair<int,string>(3,"AFRICA"),
							   pair<int,string>(2,"EURO"),
							   pair<int,string>(4,"AMERICA")};
	map<int,string> mapistr(pairs,pairs+4);
	cout<<mapistr.size()<<endl;
	mapistr[5]="CHINA";
	map<int,string>::iterator it=mapistr.begin();
	while(it!=mapistr.end())
	{
		cout<<it->first<<"---->"<<it->second<<endl;
		++it;
	}

	//cout<<mapistr["B"]<<endl;
	cout<<mapistr[4]<<endl;
}
