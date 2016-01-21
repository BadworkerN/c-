/*************************************************************************
	> File Name: vector.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 02:51:19 AM PST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> vec;
	cout<<"vec.size="<<vec.size()<<endl;
	cout<<"vec.capacity="<<vec.capacity()<<endl;

	vec.push_back(1);
	cout<<"vec.size="<<vec.size()<<endl;
	cout<<"vec.capacity="<<vec.capacity()<<endl;
	
	vec.push_back(4);
	cout<<"vec.size="<<vec.size()<<endl;
	cout<<"vec.capacity="<<vec.capacity()<<endl;


	for(size_t i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}


	vector<int>::iterator it;
	for(it=vec.begin();it<vec.end();it++)
	{
		cout<<*it<<endl;
	}


	vec.pop_back();
	cout<<"vec.size="<<vec.size()<<endl;
	cout<<"vec.capacity="<<vec.capacity()<<endl;
	for(size_t i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}

}
