#include<iostream>
using namespace std;

string names[]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void countsay(int n)
{
	if(n==0)
	{
		return ;
	}
	else
	{
		int r=n%10;
		
		countsay(n/10);
		
		cout<<names[r]<<" ";
		
		
		
	}
}
int main()
{
	
	int n;	
	cout<<"enter n";
	cin>>n;
	
	countsay(n);
}
