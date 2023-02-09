#include<iostream>
using namespace std;

void swapar(int ar[],int i,int n)
{
	if(i>=n-1)
	{
		return;
	}
	else
	{
		swap(ar[i],ar[i+1]);
		swapar(ar,i+2,n);
	}
}
int main()
{
	int ar[6]={1,2,3,4,5};
	swapar(ar,0,5);
	for(int i=0;i<5;i++)
	cout<<ar[i]<<" ";
}
