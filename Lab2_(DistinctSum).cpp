#include<bits/stdc++.h>
using namespace std;

void quicksort_mid(int array[], int lower, int higher)
{
	int i=lower;
	int j=higher;
	int pivot=array[(higher+lower)/2];
	
	while(i<=j)
	{
		while(array[i] < pivot)
		{
			i++;
		}
		while(array[j] > pivot)
		{
			j--;
		}
		if(i<=j)
		{
			int temp=array[i];
			array[i]=array[j];
			array[j]=temp;
			i++;
			j--;
		}
	}
	
	if(lower<j)
	{
		quicksort_mid(array, lower, j);
	}
	if(i<higher)
	{
		quicksort_mid(array, i, higher);
	}
}

int main()
{
	int flag=0;
	int size;
	cin>>size;
	int array[size];
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	
	quicksort_mid(array, 0, size-1);
	int sum=array[0];
	
	for(int i=1; i<size; i++)
	{
		if(array[i] != array[i-1])
		{
			sum+=array[i];
		}
	}
	cout<<sum<<" ";
}




