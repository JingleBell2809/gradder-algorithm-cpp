#include<bits/stdc++.h>
using namespace std;

main()
{
	int n, k, A[n], B[n], check=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>B[i];
	}
	cin>>k;
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if((A[i]+B[j]) >= k)
			{
				check=1;
			}
		}
	}
	
	if(check)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}




















