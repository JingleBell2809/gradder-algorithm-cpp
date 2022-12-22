#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n_color=3;
	int n_goods=5;
	int price[]={100,300,150,600,100};
	char color[]={'R','Y','G','R','Y'};
	char g_color[100];
	int t_n_color=0;
	
	for(int i=0; i<n_goods; i++)
	{
		bool Have=false;
		
		for(int j=0; j<t_n_color; j++)
		{
			if(color[i] == g_color[j])
			{
				Have=true;
			}
		}
		
		if(Have)
		{
			g_color[t_n_color]=color[i];
			t_n_color++;
		}
	}
	
	int sum=0;
	int T_sum_G[1000];
	
	for(int i=0; i<t_n_color; i++)
	{
		T_sum_G[i]=0;
		
		for(int j=0; j<n_goods; j++)
		{
			if(g_color[i] == color[j])
			{
				if(T_sum_G[i] < price[j])
				{
					T_sum_G[i]=price[j];
				}
			}
		}
		sum=sum+T_sum_G[i];
	}
	cout<<sum<<endl;
}
