#include<iostream>

using namespace std;


int power(int n,int p)
{
		
	if(p==0) //base condition where recursion should stop
	return 1;
	
	else
	{
	
		return n*power(n,p-1);
	}
}

int main()
{
	
	int n,p;
	cout<<"\nEnter n";
	cin>>n;
	cout<<"\nEnter p";
	cin>>p;	
	cout<<n<<" raise to the power "<<p<<"  is "<<power(n,p);
	return 0;
}
