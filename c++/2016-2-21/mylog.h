/*************************************************************************
	> File Name: mylog.h
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 21 Feb 2016 02:41:46 AM PST
 ************************************************************************/

#ifndef _MYLOG_H
#define _MYLOG_H
#include<log4cpp/Category.hh>


using namespace std;
inline string int2string(int line)
{
	ostringstream os;
	os<<line;
	return os.str();
}

#define postfix(msg) string(msg).append("[").append(__FILE__).append(":").append(__func__).append(":").append(int2string(__LINE__)).append("]").c_str()




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
	static Mylog &getInstance();
	static void destroy();
	void setPriority(Priority priority);
	void error(const char *msg);
	void warn(const char *msg);
	void debug(const char *msg);
	void info(const char *msg);
};

#ifndef LOG4CPP
Mylog &log=Mylog::getInstance();
#else
extern Mylog &log;
#endif

#define LOG_ERROR(msg) log.error(postfix(msg))
#define LOG_WARN(msg) log.warn(postfix(msg))
#define LOG_INFO(msg) log.info(postfix(msg))
#define LOG_DEBUG(msg) log.debug(postfix(msg))



#endif
