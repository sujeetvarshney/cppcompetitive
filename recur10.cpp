#include<iostream>

using namespace std;

void reversetring(int i,int j,string &s)
{
	if(i>j)
	return;
	swap(s[i],s[j]);
	i++;
	j--;
	reversetring(i,j,s);
}


int main()
{
	string s;
	
	cout<<"enter a string";
	cin>>s;
	
	reversetring(0,s.length()-1,s);
	cout<<"\nReverse string :"<<s;	
	
	return 0;
		
}
