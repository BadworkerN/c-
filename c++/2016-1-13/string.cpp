/*************************************************************************
	> File Name: string.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Tue 12 Jan 2016 08:47:12 PM PST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(void)
{
	string s1="hello,world!~";
	string s2("wangdao");
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
	string s3=s1+s2;
	cout<<"s3="<<s3<<endl;
	string s4=s1+s2+"hahaha";
	cout<<"s4="<<s4<<endl;

	string s5=s4.substr(6,5);
	cout<<"s5="<<s5<<endl;

	const char *p=s5.c_str();

	printf("p=%s\n",p);
	int a=strlen(p);
	printf("sizeof(p)=%d\n",a);
	
	for(size_t i=0;i!=s5.size();i++)
		cout<<s5[i]<<endl;

	for(string::iterator it=s5.begin();it!=s5.end();it++)
		cout<<*it<<endl;

	return 0;
}
