#include <bits/stdc++.h>
using namespace std;

int nums[]={4,100,8,10,30,50,200,120};
int tmp[10];
int ms=10;
int s=8;
int min=9999999;

void sort()
{
	for(int i=0; i<s-1; i++)
	{
		for(int j=i+1; j<s-i-1; j++)
		{
			if(nums[j]>nums[j+1])
			{
				int x=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=x;
			}
		}
	}
	
	for(int i=0; i<s; i++)
	{
		tmp[i]=99999;
	}
}

void merge(int left, int right, int rightend)
{
	if(right-left==1)
	{
		int diff=nums[right]-nums[left];
		
		for(int ii=left; ii<=rightend; ii++)
		{
			tmp[ii]=diff;
		}
	}
	else
	{
		int diff=nums[right]-nums[right-1];
		
		if(tmp[left]<tmp[right] && tmp[left]<diff)
		{
			int t_min=tmp[left];
			
			for(int ii=left; ii<=rightend; ii++)
			{
				tmp[ii]=t_min;
			}
		}
		else if(tmp[right]<tmp[left] && tmp[right]<diff)
		{
			int t_min=tmp[right];
			
			for(int ii=left; ii<=rightend; ii++)
			{
				tmp[ii]=t_min;
			}			
		}
		else
		{
			for(int ii=left; ii<=rightend; ii++)
			{
				tmp[ii]=diff;
			}	
		}
	}
}

void divide(int left, int right)
{
	if(left<right)
	{
		int center=(left+right)/2;
		divide(left, center);
		divide(center+1, right);
		merge(left, center+1, right);
	}
}

int main()
{
	sort();
	divide(0,7);
	cout<<tmp[0]<<endl;
}
