/*************************************************************************
	> File Name: sequential4.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Sun 28 Feb 2016 09:24:27 PM PST
 ************************************************************************/
#include<vector>
#include<iostream>
using namespace std;

void display(vector<int> &vec)
{
	vector<int>::const_iterator iter=vec.begin();
	while(iter!=vec.end())
	{
		cout<<*iter<<' ';
		++iter;
	}
	cout<<endl;
	
}
int main(void)
{
	vector<int> vecint(5,0);
	vector<int>::iterator iter=vecint.end();
	iter=vecint.insert(iter,1);
	display(vecint);
	cout<<*iter<<endl;	

	vecint.insert(iter,2,3);
	display(vecint);
	cout<<*iter<<endl;

	int arr[3]={7,8,9};
	vecint.insert(iter,arr,arr+3);
	display(vecint);
}
