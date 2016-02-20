/*************************************************************************
	> File Name: log4cpp3.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 12:18:31 AM PST
 ************************************************************************/

#include<iostream>
#include<log4cpp/Category.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/FileAppender.hh>
#include<log4cpp/BasicLayout.hh>
#include<log4cpp/Priority.hh>
using namespace std;

int main(void)
{
	log4cpp::OstreamAppender * osappender1=
		new log4cpp::OstreamAppender("osappender1",&cout);
	osappender1->setLayout(new log4cpp::BasicLayout());

	log4cpp::OstreamAppender * osappender2=
		new log4cpp::OstreamAppender("osappender2",&cout);
	osappender2->setLayout(new log4cpp::BasicLayout());

	log4cpp::Category &root=log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);

	log4cpp::Category &sub1= root.getInstance("sub1");
	sub1.addAppender(osappender1);
	sub1.setPriority(log4cpp::Priority::DEBUG);
	sub1.error("sub error");

	log4cpp::Category & sub2=root.getInstance("sub2");
	sub2.addAppender(osappender2);
	sub2.setPriority(101);
	sub2.warn("sub2 warning");
	sub2.fatal("sub2 fatal");
	sub2.alert("sub2 alert");
	sub2.crit("sub2 crit");

	log4cpp::Category::shutdown();
	return 0;

}
