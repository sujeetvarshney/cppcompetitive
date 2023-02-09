#include<iostream>

using namespaces std;


void sumar(int ar[],int n,int i,int s)
{
	if(i>=n)
	{
		cout<<"Sum :"<<s;
	}
	else
	{
		s=s+ar[i];
		sumar(ar,n,i+1,s);
	}
}





int  main()
{
	int n;
	
	cout<<"\nEnter n";
	cin>>n;
	
	int ar[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sumar(ar,n,0,0);
}
