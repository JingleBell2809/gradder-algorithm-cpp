#include <bits/stdc++.h>

using namespace std;

#define INF 9999999

int main () {
    int zeroedge;
    int V = 0;
    cin >> V;
    int selected[V];

    memset (selected, false, sizeof (selected));
    zeroedge = 0;
    selected[0] = true;

    int a,b;
    int c[V][V] = {0};

    for(int i=0 ; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            cin >> c[i][j];
        }
    }
    while (zeroedge < V - 1)
    {
        int min = INF;
        a = 0;
        b = 0;
        for (int i=0 ; i<V ; i++)
        {
            if (selected[i])
            {
                for (int j=0 ; j<V ; j++)
                {
                    if (!selected[j] && c[i][j])
                    {
                        if (min > c[i][j])
                        {
                            min = c[i][j];
                            a = i;
                            b = j;
                        }
                    }
                }
            }
        }

        cout << a << " " <<  b << " " <<  c[a][b];
        cout << endl;
        selected[b] = true;
        zeroedge++;
    }
}

