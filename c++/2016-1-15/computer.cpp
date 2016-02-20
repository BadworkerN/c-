/*************************************************************************
	> File Name: computer.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Wed 20 Jan 2016 03:35:02 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class computer
{
public:
	computer(const float p)
		:fprice_(p)
	{
		total_price_+=fprice_;
		cout<<"const float p"<<endl;
	}
	~computer()
	{
		total_price_-=fprice_;
	}

	void print()
	{
		cout<<total_price_<<endl;
	}
private:
	float fprice_;
	static float total_price_;
};

float computer::total_price_=0;

int main(void)
{
	computer pc1(7000);
	cout<<"buy pc1"<<endl;
	pc1.print();

	computer pc2(4999);
	cout<<"buy pc2"<<endl;
	pc2.print();

	computer pc3(2500);
	cout<<"buy pc3"<<endl;
	pc3.print();
}
