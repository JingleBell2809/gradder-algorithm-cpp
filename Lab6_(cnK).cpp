#include <bits/stdc++.h>

using namespace std;

int ans[100][100];

int Cnk(int n, int k){
	if(n == k){
		ans[n][k]=1;
		return ans[n][k];
	}
	if(n==0 || k==0){
		ans[n][k]=1;
		return ans[n][k];
	}
	if(ans[n][k] == 0){
		ans[n][k] = Cnk(n-1,k-1) + Cnk(n-1,k);
		return ans[n][k];
	}else{
		return ans[n][k];
	}
}

int main(){
	int n,k;
	cin >> n >> k;
	cout<<Cnk(n,k);
}
