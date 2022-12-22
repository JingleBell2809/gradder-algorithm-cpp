#include <bits/stdc++.h>

using namespace std;

int arr[40];

int Zebra(int n, int m){
	if(n == 0){
		return 1;
	}else{
		if(n < 0){
			return 0;
		}else{
			int sum=0;
			for(int i=1;i<=m;i++){
				if(arr[n-i] == 0){
					sum += Zebra(n-i,m);
				}else{
					sum += arr[n-i];
				}
			}
			arr[n] = sum;
			return arr[n];
		}
	}
	
}

int main(){
	int n,m;
	cin >> n >> m;
	
	cout<<Zebra(n,m);
	
}
