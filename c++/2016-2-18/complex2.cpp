/*************************************************************************
	> File Name: complex.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 04:33:16 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex
{
friend Complex operator +(const Complex & lsh,const Complex & rhs);
friend Complex & operator ++(Complex &lhs);
friend Complex operator ++(Complex & lhs,int);
public:
	Complex(double dreal =0.0 ,double dimag=0.0)
		:dreal_(dreal),
		dimag_(dimag){}

	void display()
	{
		cout<<dreal_<<"+"<<dimag_<<"*i"<<endl;

	}
private:
	double dreal_;
	double dimag_;
};

Complex  operator + (const Complex & lhs,const Complex &rhs)
{
	return  Complex(lhs.dreal_ + rhs.dreal_ ,lhs.dimag_ +rhs.dimag_);
}

Complex & operator ++(Complex & lhs)
{
	++lhs.dreal_;
	++lhs.dimag_;
	return lhs;
}

Complex operator ++(Complex & lhs,int)
{
	Complex tmp(lhs);
	++lhs.dreal_;
	++lhs.dimag_;
	return tmp;
}

int main()
{
	Complex c1(1,2) ,c2(3,4);
	c1.display();
	c2.display();
	Complex c3 =c1+ c2;
	c3.display();

	(++c3).display();
	c3.display();
	(c3++).display();
	c3.display();
}
