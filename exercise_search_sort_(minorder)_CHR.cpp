#include <iostream>
using namespace std;

void my_sort(int *n, int size)
{
	for(int i=0; i<size; i++)
	{
		int t=i;
		
		for(int j=i; j<size; j++)
		{
			if(n[t]>n[j])
			{
				t=j;
			}
		}
		
		int tt=n[i];
		n[i]=n[t];
		n[t]=tt;
	}
}

int main()
{
	int s;
	int k;
	cin>>s>>k;
	int p[s];
	for(int i=0; i<s; i++)
	{
		cin>>p[i];
	}
	
	my_sort(p,s);
	cout<<p[k-1]<<endl;
}


