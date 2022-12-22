#include<bits/stdc++.h>

using namespace std;

int num[100];
int arr[100];
int meet_value = 0;
int s_min = 0;
int size = 0;

void interpolationSearch(int value, int left, int right)
{
	if(left == right && num[left]!=value)
	{
		return;
	}	
	int mid = left + (((double)(right-left)/(arr[right]-arr[left]))*(value-arr[left]));	
	if(mid < left)
	{
		return;
	}
	cout<<left<<","<<mid<<","<<right<<" ";
	if(right < left)
	{
		return;
	}	
	if(arr[mid] == value)
	{
		meet_value = 1;
		return;
	}
	if(right == left)
	{
		return;
	}		
	if(arr[mid] < value)
	{
		interpolationSearch(value, mid+1, right);
	}
	else if(arr[mid] > value)
	{
		interpolationSearch(value, left, mid-1);
	}
}

void bs(int value)
{
    meet_value = 0;
    interpolationSearch(value, s_min, size-1);
    if(meet_value == 1)
	{
    	cout<<"Yes"<<endl;
	}
	else if(meet_value == 0)
	{
    	cout<<"No"<<endl;
	}
}

void Sort()
{
	for(int i=0; i<size; i++)
	{
		for (int j=i+1; j<size; j++)
		{
			if (arr[i] > arr[j])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}

int main()
{
	string key;
	int x;
	while(1)
	{
		cin>>key;
		if(key == "p")
		{			
			for(int i=0 ; i<size ; i++)
			{				
				cout<<num[i]<<" ";
			}
			cout<<endl;
		}
		else if(key == "s")
		{
			cin>>x;
			for (int i=0; i<size; i++)
			{
				arr[i] = num[i];
			}		
			Sort();						
			bs(x);
		}
		else if(key == "o")
		{
			break;
		}
		else 
		{
			const char *c = key.c_str();			
			num[size] = atoi(c);
			size++;
		}
	}
	
}
