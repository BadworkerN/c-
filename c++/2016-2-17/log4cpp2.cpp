/*************************************************************************
	> File Name: log4cpp2.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 16 Feb 2016 10:28:24 PM PST
 ************************************************************************/
#include<log4cpp/Category.hh>
#include<log4cpp/FileAppender.hh>
#include<log4cpp/RollingFileAppender.hh>
#include<log4cpp/Priority.hh>
#include<sstream>
#include<string>
#include<log4cpp/PatternLayout.hh>
#include<iostream>
using namespace std;


int main(void)
{
	log4cpp::PatternLayout *pPtnLayout1 =
			new log4cpp::PatternLayout();
	pPtnLayout1->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout *pPtnLayout2 =
			new log4cpp::PatternLayout();
	pPtnLayout2->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::FileAppender * fileAppender =
			new log4cpp::FileAppender("fileAppender","wxb.log");
	fileAppender->setLayout(pPtnLayout1);

	log4cpp::RollingFileAppender * rollfileAppender =
			new log4cpp::RollingFileAppender("rollfileAppender",
										"rollwxb.log",
										5*1024,
										1);
	rollfileAppender->setLayout(pPtnLayout2);

	log4cpp::Category & root =log4cpp::Category::getRoot().getInstance("Rootname");
	root.addAppender(fileAppender);
	root.addAppender(rollfileAppender);
	root.setPriority(log4cpp::Priority::DEBUG);

	for(int i=0 ;i<100 ;i++)
	{
		string strError;
		ostringstream oss;
		oss<<i<<":Root Error Message;";
		strError =oss.str();
		root.error(strError);
	}
	log4cpp::Category::shutdown();

	return 0;
}
