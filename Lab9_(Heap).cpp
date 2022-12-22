#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void minheap(int arr[], int size)
{
	int maxnum=arr[0];
	for(int i=1; i<size; i++)  //find max num in array
	{
		if(maxnum<arr[i])
		{
			maxnum=arr[i];
		}
	}
	
	int temp[size],checkl[size]={0};
	for(int i=0; i<size; i++)   //copy array arr -> temp
	{
		temp[i]=arr[i];
	}
	
	for(int i=0; i<size; i++)
	{
		int findmin=maxnum+1;
		int lomin=0;
		
		for(int j=0; j<size; j++)
		{
			if(findmin>=temp[j] && checkl[j]==0)
			{
				findmin=temp[j];
				lomin=j;
			}
		}
		checkl[lomin]=1;
		
		for(int j=0; j<size; j++)
		{
			if(arr[j]==findmin)
			{
				lomin=j;
			}
		}
		while(lomin>0)
		{
			if(arr[lomin]<arr[(lomin-1)/2])
			{
				swap(arr[lomin],arr[(lomin-1)/2]);
			}
			lomin=(lomin-1)/2;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void maxheap(int arr[], int size)
{
	int min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	int temp[size],checkl[size]={0};
	for(int i=0;i<size;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		int findmax=min;
		int lomax=0;
		for(int j=0;j<size;j++)
		{
			if(findmax<=temp[j] && checkl[j]==0)
			{
				findmax=temp[j];
				lomax=j;
			}
		}
		checkl[lomax]=1;
		for(int j=0;j<size;j++)
		{
			if(arr[j]==findmax)
			{
				lomax=j;
			}
		}
		while(lomax>0)
		{
			if(arr[lomax]>arr[(lomax-1)/2])
			{
				swap(arr[lomax],arr[(lomax-1)/2]);
			}
			lomax=(lomax-1)/2;
		}
		
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int theip,n,select;
	cin>>n;
	int iparr[n];
	for(int i=0;i<n;i++)
	{
		cin>>iparr[i];
	}
	cin>>select;
	if(select==1)
	{
		minheap(iparr,n);
	}
	else if(select==2)
	{
		maxheap(iparr,n);
	}
}
