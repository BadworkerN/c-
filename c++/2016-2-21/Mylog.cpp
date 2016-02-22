/*************************************************************************
	> File Name: Mylog.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 21 Feb 2016 03:14:01 AM PST
 ************************************************************************/
#include"mylog.h"
#include<iostream>
#include<log4cpp/PatternLayout.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/FileAppender.hh>
#include<log4cpp/Priority.hh>

using namespace std;

Mylog* Mylog::plog_=NULL;


Mylog& Mylog::getInstance()
{
	if(plog_==NULL)
	{
		plog_=new Mylog;
	}
	return *plog_;
}

void Mylog::destroy()
{
	if(plog_)
	{
		plog_->catref_.shutdown();
		delete plog_;
	}
}

Mylog::Mylog()
	:catref_(log4cpp::Category::getRoot())
{
	log4cpp::PatternLayout *pPtnLyt1=
		new log4cpp::PatternLayout;
	pPtnLyt1->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout *pPtnLyt2=
		new log4cpp::PatternLayout;
	pPtnLyt2->setConversionPattern("%d: %p %c %x;%m%n");

	log4cpp::OstreamAppender *pOsAppder =
		new log4cpp::OstreamAppender("osAppender",&cout);
	pOsAppder->setLayout(pPtnLyt1);
	
	log4cpp::FileAppender* pFileAppder =
		new log4cpp::FileAppender("fileAppender","mylog.txt");
	pFileAppder->setLayout(pPtnLyt2);

	catref_.setPriority(log4cpp::Priority::DEBUG);
	catref_.addAppender(pOsAppder);
	catref_.addAppender(pFileAppder);

	catref_.info("mylog create success");

}

void Mylog::setPriority(Priority priority)
{
	switch (priority)
	{
		case (ERROR):
			catref_.setPriority(log4cpp::Priority::ERROR);
			break;
		case (WARN):
			catref_.setPriority(log4cpp::Priority::WARN);
			break;
		case (INFO):
			catref_.setPriority(log4cpp::Priority::INFO);
			break;
		case (DEBUG):
			catref_.setPriority(log4cpp::Priority::DEBUG);
			break;
		default:
			catref_.setPriority(log4cpp::Priority::ERROR);
			break;
		

	}
}

void Mylog::error(const char *msg)
{
	catref_.error(msg);
}
void Mylog::warn(const char *msg)
{
	catref_.warn(msg);
}
void Mylog::info(const char *msg)
{
	catref_.info(msg);
}
void Mylog::debug(const char *msg)
{
	catref_.debug(msg);
}
