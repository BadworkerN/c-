/*************************************************************************
  > File Name: singleton.cpp
  > Author:Badboy
  > Mail:381900623@qq.com 
  > Created Time: Wed 20 Jan 2016 10:02:51 PM PST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;


class singleton
{
public:
		static singleton * getinstance()
		{
			if(p==NULL)
			{
				p=new singleton ;
			}

			return p;
		}
private:
		singleton()
		{
			cout<<"singleton()"<<endl;
		}
		static singleton *p;
};

singleton * singleton::p=NULL;
int main(void)
{
	singleton *p1=singleton::getinstance();
	singleton *p2=singleton::getinstance();
	printf("%x\n",p1);
	printf("%x\n",p2);
	return 0;
}
