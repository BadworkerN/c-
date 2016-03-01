/*************************************************************************
	> File Name: template1.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 25 Feb 2016 12:13:20 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T,int NUM>
T func(T a)
{
	return a*NUM;
}

int main(void)
{
	cout<<func<int,4>(3)<<endl;
}
