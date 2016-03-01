/*************************************************************************
	> File Name: sequential2.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 28 Feb 2016 12:15:16 AM PST
 ************************************************************************/
#include<list>
#include<iostream>
using namespace std;

int main(void)
{
	list<int>::iterator it;
	int arr[5]={1,2,3,4,5};
	list<int> listint(arr,arr+5);
	listint.push_front(9);
	it=listint.begin();
	while(it!=listint.end())
	{
		cout<<*it<<' ';
		++it;
	}
	cout<<endl;
	listint.pop_front();
	list<int>::iterator iter=listint.begin();
	while(iter!=listint.end())
	{
		cout<<*iter<<' ';
		++iter;
	}
	cout<<endl;
	
	cout<<listint.front()<<endl;
	cout<<listint.back()<<endl;
}
