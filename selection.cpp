#include<iostream>

using namespace std;

void selectionsort(int ar[],int n,int index)
{
	
	//base case
	if(index==n)
	return;
	else
	{
		//one step (find the minimum and its position)
		
		int mn=ar[index];
		int pos=index;
		for(int i=index+1;i<n;i++)
		{
			
			if(ar[i]<mn)
			{
				pos=i;
				mn=ar[i];
			}
		}
		
		swap(ar[index],ar[pos]);
		
		selectionsort(ar,n,index+1);
	}
}
    


int main()
{
	int n;
	cout<<"enter size of array required ";
	cin>>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	selectionsort(ar,n,0);		
	
	cout<<"\nSorted array\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
		
	}
	return 0;
		
}
