#include <bits/stdc++.h>

using namespace std;

int size=4;
int Array[24];
int temp[4]={0,0,0,0};
int J[4][4] = { {9,2,7,8}, {6,4,3,7}, {5,8,1,8}, {7,6,9,4} };
int min_t = 100;

void permutation(int j)
{
    if(j==size)
	{
        for(int i=0; i<size; i++)
		{
            temp[i]=Array[i]-1;
        }
        int sum = 0;
        for(int i=0;i<size;i++)
		{
        	sum += J[i][temp[i]];
		}
        if(min_t > sum)
        {
        	min_t = sum;
        	for(int i=0; i<size; i++)
			{
            	cout<<Array[i]-1<<" ";
        	}
        	cout<<endl;
		}
    }
	else
	{
        for(int i=j; i<size; i++)
		{
            int T = Array[j];
            Array[j] = Array[i];
            Array[i] = T;
            permutation(j+1);
            T = Array[j];
            Array[j] = Array[i];
            Array[i] = T;
        }
    }
}

int main()
{
	for(int i=0;i<24;i++)
	{
		Array[i]=i+1;
	}
	permutation(0);
	cout<<min_t;
}
