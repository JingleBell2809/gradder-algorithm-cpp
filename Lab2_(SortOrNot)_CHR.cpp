#include <iostream>
using namespace std;

int flag=0;
int arr[]={1,2,3,4,5,6,7,8,9};
int size=10;

void quicksort_mid(int lowerindex, int higherindex)
{
	if(flag==1)
	{
		return;
	}
	
	int i=lowerindex;
	int j=higherindex;
	int pivot=arr[(higherindex+lowerindex)/2];
	
	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<=j)
		{
			if(i!=j)
			{
				flag=1;
				return;
			}
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	if(lowerindex<j)
	{
		quicksort_mid(lowerindex,j);
	}
	if(i<higherindex)
	{
		quicksort_mid(i,higherindex);
	}
}

int main()
{
	quicksort_mid(0,size-1);
	if(flag==0)
	{
		cout<<"Yes";
	}
	if(flag==1)
	{
		cout<<"No";
	}
}





