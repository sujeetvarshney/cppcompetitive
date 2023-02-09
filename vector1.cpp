#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> v;
	
	vector <vector<int> > all;
	
	
	int n,x;
	
	cout<<"\nEnter n";
	
	cin>>n;
	
	
	for(int i=0;i<n;i++)
	{
		
		
		cout<<"\nEnter size m";
		cin>>m;
		
		for(int j=0;j<m;j++)
		{
			cout<<"enter x";
			cin>>x;
			
		
		}
		v.push_back(x);
		
	}
	
	
	cout<<"\nData is";
	
	for(int i=0;i<v.size();i++)
	{
		
		cout<<v[i]<<" ";
	}
	
}
