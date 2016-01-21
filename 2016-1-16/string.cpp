/*************************************************************************
	> File Name: string.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Wed 20 Jan 2016 11:28:58 PM PST
************************************************************************/
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class string_
{
public:
	string_()
	{
		pstr_=new char[1];
		cout<<"string()"<<endl;
	}


	string_(const char *pstr)
	{
		pstr_=new char[strlen(pstr)+1];
		strcpy(pstr_,pstr);

		cout<<"string(congst char)"<<endl;
	}


	string_(const string_ &rhs)
	{
		pstr_=new char[strlen(rhs.pstr_)+1];
		strcpy(pstr_,rhs.pstr_);
		cout<<"string(string)"<<endl;
	}


	string_ & operator=(const string_ & rhs)
	{
		if(this==&rhs)
			return *this;
		delete []pstr_;
		pstr_=new char[strlen(rhs.pstr_)+1];
		strcpy(pstr_,rhs.pstr_);
		return *this;

		cout<<"operator"<<endl;
	}

	~string_()
	{
		delete []pstr_;
		cout<<"~string"<<endl;
	}

	void print()
	{
		cout<<"pstr="<<pstr_<<endl;
	//	printf("%s\n",pstr_);
		cout<<"print"<<endl;
	}

private:
	char * pstr_;
};

int main(void)
{
	string_ str1;
	str1.print();

	string_ str2="hello ,world";
	str2.print();

	string_ str3="wangdao";
	str3.print();
	
	str2=str3;
	str2.print();
	
	string_ str4=str3;
	str4.print();

	return 0;
}
