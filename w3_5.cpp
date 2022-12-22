#include<bits/stdc++.h>

using namespace std;

int size = 5;
int ans[5] = {0,0,0,0,0};
int w[5] = {1,5,3,2,4};
int v[5] = {5,9,10,6,7};
int bag = 10;
int maxv = 0;

void NK(int j)
{
    if(j == size)
	{
        int sum_w = 0;
        for(int i=0; i<size; i++)
		{
            if(ans[i] == 1)
			{
                sum_w += w[i];
            }
        }
        int sum_v = 0;
        
        for(int i=0; i<size; i++)
		{
            if(ans[i] == 1)
			{
                sum_v += v[i];
            }
        }
        if(sum_w <= bag && sum_v > maxv)
        {
        	maxv = sum_v;
            for(int i=0; i<size; i++)
			{
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }		
    }
	else
	{
        int num = j+1;
        ans[j] = 0;
        NK(num);
        ans[j] = 1;
        NK(num);
    }
}

int main()
{
	NK(0);
	cout<<maxv<<endl;
}

