#include<iostream>

using namespace std;

#define X 4
int n=4;
int i,j,k;

void run(int G[][X])
{
    int R[X][X];
    for(i=0 ; i<X ; i++)
    {
        for(j=0 ; j<X ; j++)
        {
            R[i][j] = G[i][j];
        }
    }

    for(k=0 ; k<X ; k++)
    {
        for(i=0 ; i<X ; i++)
        {
            for(j=0 ; j<X ; j++)
            {
                R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
            }
        }
    }

    if(R[X-1][X-1] != 0)
    {
        for(i=0 ; i<X ; i++)
        {
            for(j=0 ; j<X ; j++)
            {
                cout << R[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

int main()
{
    int G[X][X];

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cin >> G[i][j];
        }
    }

    run(G);
}
