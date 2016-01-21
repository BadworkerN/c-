/*************************************************************************
	> File Name: computer.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Wed 20 Jan 2016 03:35:02 AM PST
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class computer
{
public:
	computer(const char *pname,const float p)
		:fprice_(p)
	{
		total_price_+=fprice_;
		pname_=new char[strlen(pname)+1];
		strcpy(pname_,pname);
		cout<<"const float p"<<endl;
	}
	~computer()
	{
		if(pname_)
		{
			delete []pname_;
			pname_=NULL;
		}

		total_price_-=fprice_;
	}

	static void print_total()
	{
		cout<<total_price_<<endl;
	}
	static void print(computer &com);
private:
	char *pname_;
	float fprice_;
	static float total_price_;
};

float computer::total_price_=0;

void computer::print(computer &com)
{
	cout<<com.pname_<<endl;
	cout<<com.fprice_<<endl;
}

int main(void)
{
	computer pc1("IBM",7000);
	cout<<"buy pc1"<<endl;
	computer::print(pc1);
	computer::print_total();
	//pc1.print(pc1);
	computer pc2("lenove",4999);
	cout<<"buy pc2"<<endl;
	computer::print(pc2);
	computer::print_total();
	computer pc3("shenzhou",2500);
	cout<<"buy pc3"<<endl;
	pc3.print(pc3);
	computer::print_total();

	pc2.~computer();
	cout<<"back computer2"<<endl;
	computer::print_total();
}
