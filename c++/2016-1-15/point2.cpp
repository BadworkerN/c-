/*************************************************************************
	> File Name: point.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Tue 19 Jan 2016 11:22:58 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class point
{
public:
	point(double & z ,int ix ,int iy)
		:ix_(ix),
		iy_(iy),
		ref1_(ix_),
		ref2_(z)
	{
		cout<<"point(int ix,int iy)"<<endl;
	}

	point(const point & rhs)
		:ix_(rhs.ix_),
		iy_(rhs.iy_),
		ref1_(rhs.ref1_),
		ref2_(rhs.ref2_)
	{
		cout<<"const point & rhs"<<endl;
	}

	void setx(int x)
	{
		ix_=x;
	}

	void print()
	{
		cout<<"("<<ix_<<","<<iy_<<")"<<"ref1="<<ref1_<<"ref2="<<ref2_<<endl;
	}
private:
	int ix_;
	int iy_;
	int & ref1_;
	double & ref2_;
};


int main(void)
{
	double ival=5.0;
	point p1(ival,3,4);
	p1.print();

	point p2(p1);
	p2.print();

	p1.setx(6);
	p1.print();
	p2.print();

	ival=7.0;
	p1.print();
	p2.print();

	return 0;

}
