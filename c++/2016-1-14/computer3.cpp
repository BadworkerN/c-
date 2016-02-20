/*************************************************************************
  > File Name: computer2.cpp
  > Author:Badboy
  > Mail:381900623@qq.com 
  > Created Time: Thu 14 Jan 2016 05:09:54 AM PST
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;


class computer
{
	public:
		computer(const char *pbrand,float fprice) :fprice_(fprice)
	{
		pbrand_=new char[strlen(pbrand)+1];
		strcpy(pbrand_,pbrand);
		cout<<"computer()"<<endl;
	}
		~computer()
		{
			cout<<"~computer"<<endl;
			delete []pbrand_;
		}

		computer(const computer &rhs):fprice_(rhs.fprice_)
	{
		pbrand_=new char[strlen(rhs.pbrand_)+1];
		strcpy(pbrand_,rhs.pbrand_);
	}

		computer &  operator = (computer &rhs) //:fprice_(rhs.fprice_)
		{	
			if(this==&rhs)
				return *this;
			else{
				delete []pbrand_;
				pbrand_=new char[strlen(rhs.pbrand_)+1];
				strcpy(pbrand_,rhs.pbrand_);
				fprice_=rhs.fprice_;
				return *this;
				}
		}

		void print()
		{
			cout<<"brand:"<<pbrand_<<endl;
			cout<<"price:"<<fprice_<<endl;
		}
	private:
		char *pbrand_;
		float fprice_;
};

int main(void)
{
	computer p("filco",1000);
	computer p1=p;
	p.print();
	p1.print();

	computer p2("bmw000000",100000);
	p2=p1;
	p2.print();
}
