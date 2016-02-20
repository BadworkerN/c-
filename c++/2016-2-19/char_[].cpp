/*************************************************************************
	> File Name: char_[].cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Wed 17 Feb 2016 07:37:34 AM PST
 ************************************************************************/
#include<string.h>
#include<iostream>
using namespace std;


class CharArr
{
private:
	int sz_;
	char *pbuf;
public:
	CharArr(int size):
		sz_(size),
		pbuf(new char[size])
	{}

	~CharArr()
	{
		delete []pbuf;
	}

	int size()
	{
		return sz_;
	}
	char &operator [](int idx);
};

char & CharArr::operator[](int idx)
{
	static char szNull ='\0';
	if(idx<sz_ && idx >=0)
	{
		return pbuf[idx];
	}

	else 
	{
		cout<<"下标越界"<<endl;
		return szNull;
	}
}

int main(void)
{
	char *pstr ="hello,world";
	size_t sz =strlen(pstr)+1;
	CharArr chararr(sz);

	for(size_t idx=0; idx<sz;++idx)
	{
		chararr[idx]=pstr[idx];
	}

	for(size_t idx=0;idx<chararr.size();++idx)
	{
		cout<<chararr[idx]<<endl;
	}
	return 0;
}

