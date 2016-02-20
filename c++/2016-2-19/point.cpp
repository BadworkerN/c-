/*************************************************************************
	> File Name: point.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 18 Feb 2016 05:01:21 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class Anathorpoint
{
public:
	Anathorpoint(double dx, double dy)
		:dx_(dx),
		dy_(dy)
	{}

	friend ostream & operator <<(ostream &os, const Anathorpoint &rhs);
	friend class Point;
private:
	double dx_;
	double dy_;
};

ostream & operator <<(ostream &os, const Anathorpoint &rhs)
	{
		os<<"("<<rhs.dx_<<","<<rhs.dy_<<")";
		return os;
	}

class Point
{
public:
	Point(int ix=0 ,int iy=0)
		:ix_(ix),
		iy_(iy)
	{}

	Point(Anathorpoint pa)
		:ix_(pa.dx_),
		iy_(pa.dy_)
	{}

	friend ostream & operator <<(ostream &os ,const Point &rhs);
private:
	int ix_ ;
	int iy_ ;
};

ostream & operator <<(ostream &os, const Point &rhs)
	{
		os<<"("<<rhs.ix_<<","<<rhs.iy_<<")";
		return os;
	}
int main(void)
{
	Point p1;
	cout<<p1<<endl;
	p1=5;
	cout<<p1<<endl;
	

	Anathorpoint p2(12.34 ,56.78);
	cout<<p2<<endl;

	p1=p2;
	cout<<p1<<endl;
}
