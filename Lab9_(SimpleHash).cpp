#include <iostream>
using namespace std;

int main()
{
	int n,m,theip,k,count=0;
	cin >>n>>m;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		arr[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		cin >> theip;
		if(arr[theip%n]==0)
		{
			arr[theip%n]=theip;
		}
		else
		{
			count=0;
			for(int j=1;j<=n;j++)
			{
				if(arr[(theip+(j*((theip%n)+1)))%n]==0)
				{
					arr[(theip+(j*((theip%n)+1)))%n]=theip;
					break;
				}
				else
				{
					count++;
				}
			}
		}
	}

	cin>>k;
	if(count!=n)
	{
		for(int j=0;j<n;j++)
		{
			if(k==arr[j])
			{
				cout<<j;
			}
		}
	}
	else
	{
		cout<<"-1";
	}
}
