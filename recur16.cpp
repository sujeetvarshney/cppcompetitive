#include<iostream>
using namespace std;

int c=0;
void counteven(int a[],int x)
{
	cout<<"\nData :"<<c;
	int z=sizeof(a)/sizeof(a[0]);
	if(x==z)
	{
		cout<<"\nNumber of even :"<<c;
	}
	else
	{
		if(a[x]%2==0)
		c++;
		counteven(a,x+1);
	}
}

int main()
{
	int n;
	
	cout<<"enter n";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	counteven(a,0);
	
	
	
}
