#include<iostream>
using namespace std;

void increase2(int ar[],int n,int sz)
{
	//s
	
	if(n==sz) //base case
	{
		return;
	}
	else
	{
		ar[n]=ar[n]+2; //array increased
		increase2(ar,n+1,sz);
		
	}
}

int main()
{
	
	int n;
	cout<<"enter size of array";
	
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	increase2(ar,0,n);
	
	cout<<"\nChanged array\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
