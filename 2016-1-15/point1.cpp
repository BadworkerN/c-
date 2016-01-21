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

	void print()
	{
		cout<<"("<<ix_<<","<<iy_<<")"<<endl;
	}
private:
	const int ix_;
	
	const int iy_;
};

int main(void)
{
	point p1=1;
	p1.print();

	return 0;

}
