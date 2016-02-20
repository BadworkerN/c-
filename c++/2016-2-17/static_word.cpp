/*************************************************************************
	> File Name: static_word.cpp
	> Author: BadworkerN
	> Mail:381900623@qq.com 
	> Created Time: Mon 15 Feb 2016 09:03:15 PM PST
 ************************************************************************/
#include<fstream>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

struct Word
{
	string word;
	int num;
};

class Word_static
{
public:
	void read_file(const string &  filename);
	void write_file(const string & filename);
private:
	vector<struct Word> word_vec;

};

void Word_static::read_file(const string & filename)
{
	ifstream ifs(filename.c_str()) ;
	if(ifs.good()==0)
	{
		cout<<"open readfile failed"<<endl;
		return;
	}
	string str;
	while(ifs>>str)
	{
		vector<struct Word>::iterator it;
		for(it=word_vec.begin();it!=word_vec.end();++it)
		{
			if(str==(*it).word)
			{
				++((*it).num)	;
				break;
			}
		}
			if(it == word_vec.end())
			{
				struct Word new_word;
				new_word.word=str;
				new_word.num=1;
				word_vec.push_back(new_word);
			}
	}
	ifs.close();
}
	void Word_static::write_file(const string & filename)
	{
		ofstream ofs(filename.c_str(),ios::out|ios::trunc);
		vector<struct Word>::iterator it;
		if(!ofs.good())
		{
			cout<<"open write_file failed"<<endl;
			return;
		}
		for(it=word_vec.begin();it!=word_vec.end();++it)
		{
			ofs<<(*it).word<<" "<<(*it).num<<endl;
		}
		ofs.close();
	}
int main()
{
	Word_static bible;
	string in_file;
	cout<<"input the path of txt file:"<<endl;
	cin>>in_file;
	bible.read_file(in_file);

	string out_file =in_file + ".wordstatic";
	bible.write_file(out_file);
	return 0;
}

