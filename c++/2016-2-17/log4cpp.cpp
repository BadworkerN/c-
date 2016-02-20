/*************************************************************************
	> File Name: log4cpp.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 16 Feb 2016 06:44:08 AM PST
 ************************************************************************/
#include<log4cpp/Category.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/BasicLayout.hh>
#include<log4cpp/Priority.hh>
#include<iostream>
using namespace std;

int main(void)
{
	log4cpp::OstreamAppender *osAppender = new log4cpp::OstreamAppender("osAppender",&cout);
	osAppender->setLayout(new log4cpp::BasicLayout());

	log4cpp::Category & root = log4cpp::Category::getRoot();
	root.addAppender(osAppender);
	root.setPriority(log4cpp::Priority::DEBUG);

	root.error("hello log4cpp in a ERROR message!");
	root.warn("hello log4cpp in Warn Message!");

	log4cpp::Category::shutdown();

	return 0;
}

