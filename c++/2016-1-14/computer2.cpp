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
	{
		computer p("filco",1000);
		p.print();
	}
	
	computer *p1=new computer("ganss",500);
	p1->print();
	delete p1;
}
