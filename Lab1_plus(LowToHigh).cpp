#include<bits/stdc++.h>
using namespace std;

int main()
{
	int counter=0;
	
	int size;
	cin>>size;
	
	int n[size];
	for(int i=0; i<size; i++)
	{
		cin>>n[i];
	}
	
	for(int i=0; i<size; i++)
	{
		int t=i;
		
		for(int j=i; j<size; j++)
		{
			if(n[t]>n[j])
			{
				t=j;
			}
		}
		
		int tt=n[i];
		n[i]=n[t];
		n[t]=tt;
		
		if(i != t)
		{
			counter++;
		}
	}
	
	for(int i=0; i<size; i++)
	{
		cout<<n[i]<<" ";
	}
	cout<<endl;
	cout<<counter<<endl;
}





