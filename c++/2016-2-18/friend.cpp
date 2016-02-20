/*************************************************************************
	> File Name: friend.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 12:53:09 AM PST
 ************************************************************************/
#include<cmath>
#include<iostream>
using namespace std;

class Point
{
friend float dis(const Point &lhs ,const Point & rhs);
public:
	Point():ix_(0) ,iy_(0){}

	Point(int ix, int iy) :ix_(ix),iy_(iy){}

	void print()
	{
		cout<<"<"<<ix_<<","<<iy_<<">"<<endl;
	}
private:
	int ix_;
	int iy_;
};

float dis(const Point &lhs ,const Point & rhs)
{
	float d=sqrt((lhs.ix_ - rhs.ix_)*(lhs.ix_ - rhs.ix_) +
			(lhs.iy_ - rhs.iy_)*(lhs.iy_ - rhs.iy_));

	return d;
}

int main(void)
{
		Point p1(1,2) ,p2(3,4);
		p1.print();
		p2.print();

		cout<<"distance="<<dis(p1,p2)<<endl;
		return 0;
}
