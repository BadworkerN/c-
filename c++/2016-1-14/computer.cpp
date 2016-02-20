/*************************************************************************
	> File Name: computer.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 14 Jan 2016 03:43:08 AM PST
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class computer
{
public:
	computer();
	void print();
	void setbrand(const char *brand);
	void setprice(float fprice);
private:
	char brand_[20];
	float fprice_;

};

computer::computer()
{
	cout<<"computer::computer"<<endl;
}

void computer::print()
{
	cout<<"brand:"<<brand_<<endl;
	cout<<"price:"<<fprice_<<endl;
}

void computer::setbrand(const char *brand)
{
	strcpy(brand_,brand);
}

void computer::setprice(float fprice)
{
	fprice_=fprice;
}

int main(void)
{
	computer p;
	p.setbrand("BMW.SOHO");
	p.setprice(10000000);
	p.print();
	return 0;
}
