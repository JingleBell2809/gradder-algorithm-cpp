#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, v, e;
	int n1[1000], n2[1000], n3[1000];
	int s_n1=0, s_n2=0, s_n3=0;
	int z_n1=0, z_n2=0, z_n3=0;
	cin>>v;
	cin>>e; 
	for(int i=0; i<e; i++)
	{
		cin>>n1[i];
		cin>>n2[i];
	}
	
	for(int i=0; i<e; i++)
	{
		if(n1[i]%2 == 0)
		{
			int meet=1;
			for(int j=0; j<z_n3; j++)
			{
				if(n1[i]==n3[j])
				{
					meet=0;
					break;
				}
			}
			
			if(meet)
			{
				n3[z_n3]=n1[i];
				z_n3++;
			}
		}
	}
	
	cout<<z_n3<<endl;	
}

