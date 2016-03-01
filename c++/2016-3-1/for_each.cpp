/*************************************************************************
	> File Name: for_each.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 01 Mar 2016 05:50:58 AM PST
 ************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void print(vector<int>::value_type v)
{
	cout<<v<<" ";
}
int main(void)
{
	int arr[6]={1,2,3,4,5,6};
	vector<int> vecint(arr,arr+6);
	for_each(vecint.begin(),vecint.end(),print);
	cout<<endl;
	return 0;
}
