/*************************************************************************
	> File Name: log4cpp1.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 16 Feb 2016 09:14:41 PM PST
 ************************************************************************/
#include<log4cpp/Category.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/PatternLayout.hh>
#include<log4cpp/Priority.hh>
#include<iostream>
using namespace std;

int main(void)
{
	log4cpp::PatternLayout *pLayout =new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x: %m%n");
	
	
	log4cpp::OstreamAppender *pOsAppder=
		new log4cpp::OstreamAppender("osAppender",&cout);

	pOsAppder->setLayout(pLayout);

	log4cpp::Category &root =log4cpp::Category::getRoot();

	log4cpp::Category & infoCategory =root.getInstance("infoCategory");

	infoCategory.addAppender(pOsAppder);
	infoCategory.setPriority(log4cpp::Priority::INFO);

	infoCategory.info("system si running");

	infoCategory.warn("system has warnning");
	infoCategory.error("system has an error ,can not find file");
	infoCategory.fatal("system has an fatal error ,must be shutdown");
	infoCategory.info("system shutdown ,you can find some infomation in sysytem log");
	log4cpp::Category::shutdown();

	return 0;
}

