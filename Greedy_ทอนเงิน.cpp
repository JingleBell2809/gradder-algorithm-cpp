#include <bits/stdc++.h>
using namespace std;

int main()
{
	int money=5236;
	int a[]={1000,500,100,50,20,10,5,2,1};
	int b[]={0,0,0,0,0,0,0,0,0};
	
	for(int i=0; i<9; i++)
	{
		while(1)
		{
			money=money-a[i];
			b[i]++;
			
			if(money<0)
			{
				money=money+a[i];
				b[i]--;
				break;
			}
		}
		
		if(money==0)
		{
			break;
		}
	}
	
	cout<<"1000 500 100 50 20 10 5 2 1"<<endl;
	for(int i=0; i<9; i++)
	{
		cout<<b[i]<<" ";
	}	
}



