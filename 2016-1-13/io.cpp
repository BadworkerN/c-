/*************************************************************************
	> File Name: io.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Tue 12 Jan 2016 09:53:23 PM PST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s;
#if 0
	while(cin>>s)
	{
		cout<<s<<endl;
	}
#endif
	while(getline(cin,s))
		cout<<s<<endl;
	return 0;
}

