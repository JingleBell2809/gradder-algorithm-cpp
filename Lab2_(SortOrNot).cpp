#include <iostream>
using namespace std;

int main()
{
	int n,i;
	bool check = true;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			check = false;
			break;
		}
	}
	if(check)
	{
		cout<<"Yes";
	}else
	{
		cout<<"No";
	}
}



