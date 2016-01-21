/*************************************************************************
	> File Name: io1.cpp
	> Author:Badboy
	> Mail:381900623@qq.com 
	> Created Time: Thu 21 Jan 2016 03:43:19 AM PST
 ************************************************************************/
#include<limits>
#include<iostream>
using namespace std;

void printcin()
{
	cout<<"bad="<<cin.bad()<<endl;
	cout<<"fail="<<cin.fail()<<endl;
	cout<<"eof="<<cin.eof()<<endl;
	cout<<"good="<<cin.good()<<endl;

}

int main(void)
{
	int num;
	printcin();
	while(cin>>num)
	{
		cout<<num<<endl;
	}
	cout<<endl;
	printcin();
	cout<<endl;
	cin.clear();
	printcin();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	string s;
	cin>>s;
	cout<<s<<endl; 
	return 0;
}
