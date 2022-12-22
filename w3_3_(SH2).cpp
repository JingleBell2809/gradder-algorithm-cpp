#include <bits/stdc++.h>

using namespace std;

bool sequence_search(int num[],int value,int s_max)
{
	for( int i=0 ; i < s_max ; i++ )
	{
		cout<<num[i]<<" ";
		if ( num[i] == value ) 
		{ 
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;	
	return 0;
}

int main()
{
	string key;
	int x;
	int num[100];
	int sq[100];
	int k = 0;
	int size = 0;
	int s_min = 0;
	int s_max;

	while(1)
	{
		cin>>key;
		int X;
		stringstream ss;  
  		ss << key;  
  		ss >> X;
		if(key[size] != 'p' && key[size] !='s' && key[size] !='o')
		{
			num[k]=X;
			k++;
			
		}
		else if(key[size] == 'p')
		{
			for(int i=0 ; i<k; i++)
			{
				cout<<num[i]<<" ";
			}
			cout<<endl;
		}
		else if(key[size] == 's')
		{
			cin>>x;
			for(int i=0; i<k; i++)
			{
				sq[i]=num[i];
			}
			sequence_search(sq,x,k);
		}
		else if(key[size] == 'o')
		{
			break;
		}
	}
	
}
