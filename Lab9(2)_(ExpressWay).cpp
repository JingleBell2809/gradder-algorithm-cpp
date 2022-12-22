#include<iostream>

using namespace std;

int i,j,n,x,v;
int sum=0;
int a=0,b=0;
int G[100][100];
int visi[100] = {0};
int tra[100] = {0};
int z[100] = {0};

void run(int v)
{
    for(i=1 ; i<n ; i++)
    {
        visi[v] = 1;
        for(j=1 ; j<=n ; j++)
        {
            if(!visi[j])
            {
                tra[j] = 1;
                z[a++] = j;
            }
        }
        tra[v] = 0;
        v = z[b++];
    }
}

int main()
{
    cin >> n;
    for(x=1 ; x<=n ; x++)
    {
        cin >> i >> j;
        G[i][j] = 1;
    }

    v = 1;
    run(v);
    sum = 0;

    for(i=0 ; i<n ; i++)
    {
        if(visi[i] == 0)
        {
            sum++;
        }
    }

    if(sum > 0)
    {
        cout << "No" << endl;
    }
    else if(sum > 1)
    {
        cout << "Yes" << endl;
    }
}
