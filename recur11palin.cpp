#include<iostream>

using namespace std;

bool checkpalin(string s,int i,int j)
{
	if(i>j)
	return true;
	if(s[i]!=s[j])
	{
		return false;
	}
	
	i++;
	j--;
	return checkpalin(s,i,j);
}


int main()
{
	string s;
	
	cout<<"enter a string";
	cin>>s;
		if( checkpalin(s,0,s.length()-1))
		{
			cout<<"Palindrome";
		}
		else
		{
			cout<<"not palindrome";
		}
			
	
	return 0;
		
}
