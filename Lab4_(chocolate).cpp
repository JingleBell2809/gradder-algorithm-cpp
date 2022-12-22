#include<iostream>
using namespace std;

int cho(int n, int arr[])
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return min(arr[n-1]+cho(n-2,arr), cho(n-1,arr));
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<cho(n,arr);
}



