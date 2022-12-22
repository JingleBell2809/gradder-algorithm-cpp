#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	
	int n[size];
	for(int i=0; i<size; i++)
	{
		cin>>n[i];
	}	

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
	
	int counter=0;
	int temp=n[0];
	
	for(int i=0; i<size; i++)
	{
		temp=temp+1;
		if(temp != n[i])
		{
			temp=n[i];
			counter++;
		}
	}
	cout<<counter<<endl;	
}




