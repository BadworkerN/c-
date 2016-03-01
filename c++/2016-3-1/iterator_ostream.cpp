/*************************************************************************
	> File Name: iterator_ostream.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 29 Feb 2016 11:58:29 PM PST
 ************************************************************************/
#include<vector>
#include<iterator>
#include<algorithm>
#include<iostream>
using namespace std;

int main(void)
{
	int arr[6]={1,2,3,4,5,6};
	vector<int> vecint(arr,arr+6);
	ostream_iterator<int,char> osi(cout ," ");
	copy(vecint.begin(),vecint.end(),osi);

}
