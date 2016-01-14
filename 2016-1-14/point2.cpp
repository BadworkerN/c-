/*************************************************************************
	> File Name: point2.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 14 Jan 2016 04:38:24 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class point
{
public:
	point(int x=0,int y=0) :ix_(x) , iy_(y)
	{
		//ix_=x;
		//iy_=y;
	}
	void print()
	{
		cout<<"("<<ix_<<","<<iy_<<")"<<endl;
	}
private:
	int ix_;
	int iy_;
};

int main(void)
{
	point p1;
	p1.print();

	point p2(3);
	p2.print();

	point p3(4,5);
	p3.print();
}
