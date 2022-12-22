#include <iostream>
using namespace std;

int main()
{
	int n, k, count=0, maxcount=0;
	cin>>n>>k;
	
	int arr[n],arr1[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0 ; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(arr[i]<arr[j]) 
			{
				count++;	
			}
			if(count>maxcount)
			{
				maxcount=count;	
			} 
		}
		arr1[i]=count;
		count=0;
	}
	
	for(int i=0; i<n; i++)
	{
		if(arr1[i] == maxcount-k+1) 
		{
			cout<<arr[i];	
		} 
	}
}



