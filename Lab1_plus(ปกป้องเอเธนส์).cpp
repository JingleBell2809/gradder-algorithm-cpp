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
	int n1[1000];
	int n2[1000];
	int s_n1=0;
	int s_n2=0;
	int z_n1=0;
	int z_n2=0;
	int a;
	int b;
	cin>>a;
	for(int i=0; i<a; i++)
	{
		cin>>b;
		if(b%2==0)
		{
			n1[z_n1]=b;
			s_n1=s_n1+b;
			z_n1++;
		}
		else
		{
			n2[z_n2]=b;
			s_n2=s_n2+b;
			z_n2++;	
		}
	}
	my_sort(n1, z_n1);
	
	for(int i=0; i<z_n1; i++)
	{
		cout<<n1[i]<<" ";
		cout<<s_n1<<" ";
	}
	
	my_sort(n2, z_n2);
	
	for(int i=0; i<z_n2; i++)
	{
		cout<<n2[i]<<" ";
		cout<<s_n2<<" ";
	}		
}





