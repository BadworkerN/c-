/*************************************************************************
	> File Name: replace_if.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Tue 01 Mar 2016 06:29:33 AM PST
 ************************************************************************/
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>::value_type v)
{
	cout<<v<<' ';
}
int main(void)
{
	int arr[6]={1,2,3,4,5,6};
	vector<int> vecint(arr,arr+6);
	greater<int> lt;
	replace_if(vecint.begin(),vecint.end(),bind2nd(lt,3),7);
	for_each(vecint.begin(),vecint.end(),print);
	cout<<endl;
}
