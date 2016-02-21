/*************************************************************************
	> File Name: mylog.h
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 21 Feb 2016 02:41:46 AM PST
 ************************************************************************/

#ifndef _MYLOG_H
#define _MYLOG_H

#include<log4cpp/Category.hh>

enum Priority
{
	ERROR,
	WARN,
	INFO,
	DEBUG
};

class Mylog
{
private:
	static Mylog *plog_;
	Mylog();
	log4cpp::Category &catref_;
public:
	static Mylog *getInstance();
	static void destroy();
	void setPriority(Priority priority);
	void error(const char *msg);
	void warn(const char *msg);
	void debug(const char *msg);
	void info(const char *msg);
};

#endif
