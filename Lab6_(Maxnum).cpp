#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int Maxnum(int arr[],int m,int n){
    if(m==0){
        return 0;
    }
    if(n-arr[m-1] >= 0){
        return max(Maxnum(arr,m-1,n),Maxnum(arr,m-1,n-arr[m-1])+1);
    }
    else{
        return Maxnum(arr,m-1,n);
    }
}

int main(){
    int n;
    int k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<Maxnum(arr,n,k);
    return 0;
}