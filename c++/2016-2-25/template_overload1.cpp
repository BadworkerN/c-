/*************************************************************************
	> File Name: template_overload1.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Fri 26 Feb 2016 07:18:12 PM PST
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
T MAX(T x,T y)
{
	return x>y?x:y;
}

template<typename T>
T MAX(T arr[],int n)
{
	T max=arr[0];
	for(int i=1;i!=n;++i)
	{
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}

int main(void)
{
	cout<<MAX(3,4)<<endl;
	int arr[]={2,9,7,3,8,5};
	cout<<MAX(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
}
