#include<iostream>
#include<ctype.h>
using namespace std;

void convertlower(string &s, int n)
{
	
	if(n==s.length())
	{
		return;
	}
	else
	{
			if(isupper(s[n]))
			s[n]=tolower(s[n]);
		convertlower(s,n+1);
	}
	
}

int main()
{
	
	string s;
	
	cout<<"enter a string";
	cin>>s;
	
	convertlower(s,0);
	
	cout<<"\nChanged String :"<<s;
	
}
