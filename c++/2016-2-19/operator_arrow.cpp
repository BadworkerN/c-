/*************************************************************************
	> File Name: operator_arrow.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 18 Feb 2016 12:47:21 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;


class Data
{
public:
	int getlen()
	{
		return 5;
	}
};

class DataPtr
{
public:
	DataPtr()
	{
		pdata_ =new Data;
	}

	~DataPtr()
	{
		delete pdata_;
	}

	Data * operator->()
	{
		return pdata_;
	}
private:
	Data *pdata_;
};

int main()
{
	DataPtr p;
	cout<<p->getlen()<<endl;

}
