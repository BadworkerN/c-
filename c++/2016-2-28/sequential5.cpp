/*************************************************************************
	> File Name: sequential5.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 28 Feb 2016 11:27:30 PM PST
 ************************************************************************/
#include<list>
#include<iostream>
using namespace std;

void display(list<int> &li)
{
	list<int>::iterator it;
	for(it=li.begin();it!=li.end();++it)
	{
		cout<<*it<<' ';
	}
	cout<<endl;

}

int main(void)
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	list<int> listint(arr,arr+9);
	display(listint);

	list<int>::iterator iter=listint.begin();
	++iter;
	iter=listint.erase(iter);
	display(listint);
	cout<<*iter<<endl;

	listint.erase(iter,listint.end());
	display(listint);

	listint.clear();
	display(listint);
}
