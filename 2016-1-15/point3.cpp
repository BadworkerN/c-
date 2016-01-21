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
	point(int ix=0 ,int iy=0)
		:ix_(ix),iy_(iy)
	{
	//	ix_=ix;
	//	iy_=iy;
		cout<<"point(int ix,int iy)"<<endl;
	}
	void setx(int x)
	{
		ix_=x;
	}

	void sety(int y)
	{
		iy_=y;
	}
	void print() const
	{
		cout<<"const"<<endl;
		cout<<"("<<ix_<<","<<iy_<<")"<<endl;
	}

	void print()
	{
		cout<<"print()"<<endl;
		cout<<"("<<ix_<<","<<iy_<<")"<<endl;
	}

	~point()
	{
		cout<<"~point"<<endl;
		ix_=-1;
	}
private:
	int ix_;
	
	int iy_;
};

int main(void)
{
	point p1(3,4);
	p1.print();
	p1.setx(5);
	p1.sety(6);
	p1.print();

	point const p2(1,2);
	p2.~point();
	p2.print();
	return 0;

}
