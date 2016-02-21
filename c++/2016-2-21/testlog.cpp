/*************************************************************************
	> File Name: testlog.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 21 Feb 2016 04:48:52 AM PST
 ************************************************************************/
#include"mylog.h"
#include<iostream>
using namespace std;

int main(void)
{
	Mylog *plog_=Mylog::getInstance();
	plog_->error("herllo");

	Mylog::destroy();
}
