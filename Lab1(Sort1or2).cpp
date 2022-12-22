#include<bits/stdc++.h>
using namespace std;

void my_sort(int *n, int size)
{	
	for(int i=0 ;i<size; i++)	
	{
		int t = i;
		for(int j=i; j<size; j++)
		{
			if( n[t] > n[j])
			{
				t = j;
			}
		}
		int tt =n[i];
		n[i] = n[t];
		n[t] = tt;
	}
}

void my_sort_MaxToMin(int *n,int size)
{
	for(int i=0; i<size; i++)	
	{
		int t = i;
		for(int j=i; j<size; j++)
		{
			if( n[t] < n[j])
			{
				t = j;
			}
		}
		int tt =n[i];
		n[i] = n[t];
		n[t] = tt;
	}
}

int main()
{
	
	int size;
	cin>>size;
	int n1[size];
	for(int i=0; i<size; i++)
	{
		cin>>n1[i];
	}
	int n2[1000];   int n_n2 = 0;
	int n3[1000];   int n_n3 = 0;
	int Select;
	cin>>Select;	
	
	// Press 1
	if(Select==1)
	{
		int mid = (size-1)/2+1;
		my_sort(n1,size);
		
		for(int i=mid+1; i<size; i++)
		{
			n2[n_n2]=n1[i];
			n_n2++;
		}
		
		my_sort_MaxToMin(n2,n_n2);
		
		for(int i=0; i<n_n2; i++)
		{
			n3[n_n3]=n2[i];
			n_n3++;
		}
		
		for(int i=0; i<mid+1; i++)
		{
			n3[n_n3]=n1[i];
			n_n3++;
		}
		
		for(int i=0; i<n_n3; i++)
		{
			cout<<n3[i]<<" ";
		}		
	}


	//Press 2
	else if(Select==2)
	{
		for(int i=0; i<size; i++)
		{
			if(n1[i]%2==0)
			{
				n2[n_n2] = n1[i];
				n_n2++;
			}
			else
			{
				n3[n_n3] = n1[i];
				n_n3++;		
			}
		}
		my_sort(n2,n_n2);
		my_sort_MaxToMin(n3,n_n3);
		
		for(int i=n_n2; i<n_n2+n_n3; i++)
		{
			n2[i] = n3[i-n_n2];
		}
		for(int i=0; i<size ; i++)
		{
			cout<<n2[i]<<" ";
		}		
	}


}




































