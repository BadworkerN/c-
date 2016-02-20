/*************************************************************************
	> File Name: line.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 18 Feb 2016 04:38:08 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class Line
{
public:
	class Point
	{

	public:
		Point(int ix ,int iy)
			:ix_(ix),
			iy_(iy)
		{}

		void printpoint();
	private:
		int ix_;
		int iy_;
	};
	Line (int x1,int y1, int x2, int y2 )
		:p1(x1 ,y1),
		p2(x2,y2)
	{}


	void lineprint()
	{
		p1.printpoint();
		p2.printpoint();
	}
private:
	Point p1;
	Point p2;

};

void Line::Point::printpoint()
{
	cout<<"("<<ix_<<","<<iy_<<")"<<endl;
}

int main(void)
{
	Line line(1,2,3,4);
	line.lineprint();
}
