/*************************************************************************
	> File Name: nullpoint.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Wed 20 Jan 2016 06:29:51 AM PST
 ************************************************************************/

#include<iostream>
using namespace std;


class nullpointcall
{
public:
	static void test1();
	void  test2();
	void test3(int itest);
	void test4();

private:
	static int m_istatic;
	int m_itest;
}

int nullpointcall::m_istatic=0;

void nullpointcall::test()
{
	cout<<"m_istatic="<<m_istatic<<endl;
}

void nullpointcall::test2()
{
	cout<<"very cool!"<<endl;
}

void nullpointcall::test3(int itest)
{
	cout<<"itest="<<itest<<endl;
}


void nullpointcall::test4()
{
	cout<<"m_itest="<<m_itest<<endl;
}


int main(void)
{
	nullpointcall *p=NULL;
	p->test1();
	p->test2();
	p->test3(3);
//	p->test4(); error
}
