#include<iostream>
#include<ctype.h>
using namespace std;

void convert(string &s, int n)
{
	
	if(n==s.length())
	{
		return;
	}
	else
	{
		s[n]=toupper(s[n]);
		convert(s,n+1);
	}
	
}

int main()
{
	
	string s;
	
	cout<<"enter a string";
	cin>>s;
	
	convert(s,0);
	
	cout<<"\nChanged String :"<<s;
	
}
