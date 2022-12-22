#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n[100];
	int A;
	int size=0;
	
	while(cin>>A)
	{
		n[size]=A;
		size++;
	}
	
	for(int i=0; i<size-1; i++)
	{
		for(int k=0; k<size; k++)
		{
			cout<<n[k]<<" ";
		}
		cout<<endl;
		
		for(int j=1; j<(size-i); j++)
		{
			if(n[i]>n[j])
			{
				int t=n[j];
				n[j]=n[i];
				n[i]=t;
			}
		}
	}
}
