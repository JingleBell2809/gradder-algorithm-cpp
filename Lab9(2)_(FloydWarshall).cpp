#include<bits/stdc++.h>

using namespace std;

int min(int a , int b)
{
    return (a<b) ? a:b;
}

int main()
{
    int i,j,k;
    int n=4,m;
    cin >> n >> m;
    int arr[n][n] = {0};
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i != j)
            {
                cin >> arr[i][j];
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    for(k=0 ; k<n ; k++)
    {
        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<n ; j++)
            {
                arr[i][j] = min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }

    bool ans = false;
    i=0;
    while(i<n && ans == false)
    {
        if(arr[i][i] < 0)
        {
            i++;
        }
        else
        {
            ans = true;
            cout << "Yes";
            i = n+1;
        }
        if(i == n)
        {
            cout << "No";
        }
    }
}
