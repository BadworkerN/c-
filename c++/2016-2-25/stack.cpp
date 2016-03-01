/*************************************************************************
	> File Name: stack.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Fri 26 Feb 2016 09:04:20 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T,int num>
class Stack
{
private:
	T arr_[num];
	int top_;
public:
	Stack()
		:top_(0)
	{}

	bool empty();
	bool push(const T &);
	bool pop(T &);
	bool full();

	int & getPos()
	{
		return top_;
	}
};

template<typename T,int num>
bool Stack<T,num>::empty()
{
	return top_==0;
}

template<typename T,int num>
bool Stack<T ,num>::full()
{
	return top_==num;
}

template<typename T,int num>
bool Stack<T, num>::push(const T & obj)
{
	if(full())
	{
		return false;
	}
	else
	{
		arr_[top_++]=obj;
		return true;
	}
}

template<typename T,int num>
bool Stack<T ,num>::pop(T &obt)
{
	if(empty())
		return false;
	else
	{
		--top_;
		obt=arr_[top_];
		return true;
	}
}

int main(void)
{
	Stack<int ,10>stack;
	cout<<stack.empty()<<endl;
	stack.push(5);
	cout<<stack.empty()<<endl;

	for(int i=1;i!=10;++i)
		stack.push(i);
	cout<<stack.full()<<endl;

	int rec=0;
	while(stack.pop(rec))
		cout<<rec<<endl;

}
