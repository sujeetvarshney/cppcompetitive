#include<iostream>

using namespace std;


bool checksorting(int ar[],int n)
{
	if(n==0 or n==1)
	return true;
	if(ar[0]>ar[1])
	return false;
	else
	{
		return checksorting(ar+1,n-1);
	}
	
}
int main()
{
	int n;
	
	cout<<"enter array size";
	cin>>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	if(checksorting(ar,n))
	{
		cout<<"Array Sorted";
	}
	else
	{
		cout<<"Array not sorted";
	}
	
	
}
