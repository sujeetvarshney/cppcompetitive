#include<iostream>

using namespace std;

void shownext(string &s,int i)
{
	if(i==s.length())
	return;
	
	s[i]=s[i]+1;
	shownext(s,i+1);
	
}


int main()
{
	string s;
	
	cout<<"enter a string";
	cin>>s;
		
	shownext(s,0);
	cout<<s;		
	
	return 0;
		
}
