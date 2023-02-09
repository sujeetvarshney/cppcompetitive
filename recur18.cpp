#include<iostream>

using namespace std;

void bubblesort(int ar[],int n)
{
	if(n==0 || n==1)
	{
		return ;
	}
	else
	{
		
		for(int i=0;i<n-1;i++)
		{
			if(ar[i]>ar[i+1])
			{
				swap(ar[i],ar[i+1]);
			}
		}
		
		bubblesort(ar,n-1);
		
	}
	
}

int main()
{
	int n;
	
	cout<<"Enter size ";
	cin>>n;
	
	int ar[n];
	
	cout<<"Enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	bubblesort(ar,n);
	
	cout<<"\nSorted array:";
	
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
}
