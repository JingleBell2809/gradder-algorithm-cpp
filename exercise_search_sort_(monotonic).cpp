#include <iostream>
using namespace std;

int main()
{
	int n,a=0,check=0,copy=1,maxcopy=1,start=0,end=0;
	cin >> n;                  
	char num[n],number;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> number;
		num[i] = number;
	} 
	for(int i = 0 ; i < n-1 ; i++)
	{ 
		if(num[i] <= num[i+1])
		{
			copy++;
			
			if(copy > maxcopy)
			{
				maxcopy = copy;
				start = i-(copy-2);
				end = i+1;
			}
		}
		else
		{
			copy = 1;
		}
	}
	
	for(int i = start ; i <= end ; i++)
	{
		cout << num[i] ;
	}
}
