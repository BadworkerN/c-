/*************************************************************************
	> File Name: template.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 24 Feb 2016 11:56:00 PM PST
 ************************************************************************/
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

template<typename T>
T add(const T &a,const T &b)
{
	return a+b;
}

template<>
const char* add(const char* const &a ,const char* const &b)
{
	char *ptmp =new char[strlen(a)+strlen(b)+1];
	strcpy(ptmp,a);
	strcat(ptmp,b);
	return ptmp;
}
int main(void)
{
	cout<<add(10,20)<<endl;
	cout<<add(1.0,2.0)<<endl;
	string s1="hello";
	string s2=",world!";
	cout<<add(s1,s2)<<endl;

	const char * const p1="hello";
	const char * const p2="world";
	cout<<add(p1,p2)<<endl;
}
