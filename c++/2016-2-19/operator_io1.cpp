/*************************************************************************
	> File Name: operator_io.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 11:08:52 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex
{
private:
	double dreal_;
	double dimag_;

public:
	Complex(double dreal ,double dimag)
		:dreal_(dreal),
		dimag_(dimag)
	{}
	double getreal() const
	{
		return dreal_;
	}

	double getimag() const
	{
		return dimag_;
	}
};

ostream & operator<<(ostream &os ,const  Complex &rhs)
{
	os<<rhs.getreal()<<"+"<<rhs.getimag()<<"*i";
	return os;
}

int main (void)
{
	Complex c1(1,2);
	cout<<c1<<endl;
}
