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
	point(int ix ,int iy)
		:ix_(ix),
		iy_(iy)
	{
		cout<<"point(int ix,int iy)"<<endl;
	}


	void setx(int x)
	{
		ix_=x;
	}

	void print()
	{
		cout<<"("<<ix_<<","<<iy_<<")"<<endl;
	}
private:
	int ix_;
	int iy_;
};

class line
{
public:
	line(int x1,int y1,int x2,int y2)
		:pt1_(x1,y1),
		 pt2_(x2,y2)
	{
		cout<<"line"<<endl;
	}

	line(const line & rhs)
		:pt1_(rhs.pt1_),
		pt2_(rhs.pt2_)
	{
		cout<<"line(rhs)"<<endl;
	}


	void draw()
	{
		pt1_.print();
		cout<<"to";
		pt2_.print();
	}
private:
		point pt1_;
		point pt2_;
};

int main(void)
{
	line line1(1,2,3,4);
	line1.draw();

	line line2(line1);
	line2.draw();
}
