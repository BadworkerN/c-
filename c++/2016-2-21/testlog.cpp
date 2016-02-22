/*************************************************************************
	> File Name: testlog.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 21 Feb 2016 04:48:52 AM PST
************************************************************************/

#define LOG4CPP
#include"mylog.h"
#include<iostream>

using namespace std;

int main(void)
{
//	Mylog &plog_=Mylog::getInstance();

	log.error(postfix("hello,world"));

	cout<<__FILE__<<endl;
	cout<<__func__<<endl;
	cout<<__LINE__<<endl;



	Mylog::destroy();
}
