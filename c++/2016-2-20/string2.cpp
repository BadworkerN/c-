/*************************************************************************
	> File Name: string.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Thu 18 Feb 2016 07:48:01 PM PST
 ************************************************************************/
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class String
{
public:
		String();
		String(const char *pstr);
		String(const String & rhs);
		String & operator=(const String &rhs);
		~String();
		friend ostream & operator <<(ostream &os ,const String &rhs);
		size_t use()
		{
			return pstr_[strlen(pstr_)+1];
		}

		const char *c_str() 
		{
			return pstr_;
		}

private:
		class CharProxy
		{
		public:
			CharProxy(String & str,size_t idx);
			CharProxy &operator = (char c);
			operator char() const;
		private:
			String & thestring_;
			size_t charindex_;
		};
public:	
		CharProxy operator[](size_t idx);
private:
		char *pstr_;
};


String::String()
{
	pstr_=new char[2];
	pstr_[1]=1;
}

String::String(const char * pstr)
{
	pstr_=new char[strlen(pstr)+2];
	strcpy(pstr_ ,pstr);
	pstr_[strlen(pstr_)+1]=1;
}

String::String(const String &rhs)
{
	pstr_=rhs.pstr_;
	++pstr_[strlen(pstr_)+1];		
}

String & String::operator=(const String &rhs)
{
	if(this!= &rhs)
	{
		if(--pstr_[strlen(pstr_)]==0)
			delete []pstr_;

		pstr_=rhs.pstr_;
		++pstr_[strlen(pstr_)+1];
	}
	return * this;
}

String::~String()
{
	cout<<"~string()"<<endl;
	if(--pstr_[strlen(pstr_)]==0)
		delete []pstr_;
}


ostream & operator <<(ostream &os ,const String &rhs)
{
	os<<rhs.pstr_;
	return os;
}

String::CharProxy::CharProxy(String & str ,size_t idx)
	:thestring_(str),
	charindex_(idx)
{}

String::CharProxy &String::CharProxy::operator=(char c)
{
	size_t len=strlen(thestring_.pstr_);
	if(charindex_<len && charindex_>=0)
	{
		size_t refcount=thestring_.use();
		if(refcount >1)
		{
			char * tmp=thestring_.pstr_;
			tmp=new char[strlen(thestring_.pstr_)+2];
			strcpy(tmp,thestring_.pstr_);
			tmp[strlen(tmp)+1]=1;
			--thestring_.pstr_[len+1];
			thestring_.pstr_=tmp;	
		}
		thestring_.pstr_[charindex_]=c;
	}
	else
	{
		cout<<"下标越界"<<endl;
		return *this;
	}
}

String::CharProxy::operator char()const
{
	static char nullchar ='\0';
	size_t len=strlen(thestring_.pstr_);
	if(charindex_<len &&charindex_>=0)
		return thestring_.pstr_[charindex_];
	else
	{
		cout<<"下标越界"<<endl;
		return nullchar;
	}
}

String::CharProxy String::operator[](size_t idx)
{
	return CharProxy(*this ,idx);
}

int main(void)
{
	String s1;
	String s2=s1;
	cout<<s2.use()<<endl;


	String s3="hello,world";
	String s4;
	cout<<s4.use()<<endl;

	s4=s3;
	cout<<s4.use()<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;

	printf("&s3= %x\n" ,s3.c_str());
	printf("&s4= %x\n" ,s4.c_str());

	cout<<"-------------------"<<endl;
//	s4[0]='x';
	cout<<s4[0]<<endl;	
	cout<<s3.use()<<endl;
	cout<<s4.use()<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;

	printf("&s3= %x\n" ,s3.c_str());
	printf("&s4= %x\n" ,s4.c_str());



	return 0;
}


