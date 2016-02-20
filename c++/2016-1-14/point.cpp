/*************************************************************************
	> File Name: point.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 14 Jan 2016 03:19:58 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class point
{
private:
	int ix;
	int iy;
public:
	void print()
	{
		cout<<"ix="<<ix<<endl;
		cout<<"iy="<<iy<<endl;
	}

	void setpoint(int x,int y)
	{
		ix=x;
		iy=y;
	}
};
int main(void)
{
	point p1;
	//cout<<p1.ix ;  error
	p1.setpoint(3,4);
	p1.print();
	return 0;
}
