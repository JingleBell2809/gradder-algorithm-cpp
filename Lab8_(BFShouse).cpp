#include<iostream>

using namespace std;

int i,j,k,n,v;
int f=0,r=0;
int g[100][100];
int q[100]={0},visit[100],visited[100]={0};

int main()
{
    int m;
    cin >> n;
    cin >> m;
    for(k=1 ; k<=m ; k++)
    {
        cin >> i;
        cin >> j;
        g[i][j] = 1;
    }
    cin >> v;
    cout << v <<" ";
    visited[v] = 1;
    k=1;
    while(k<n)
    {
       for(j=1 ; j<=n ; j++)
       {
           if(g[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
           {
               visit[j] = 1;
               q[r++] = j;
           }
       }
       v = q[f++];
       cout << v <<" ";
       k++;
       visit[v] = 0;
       visited[v] = 1;
    }
}
