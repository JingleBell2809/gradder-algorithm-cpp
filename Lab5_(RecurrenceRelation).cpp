#include <bits/stdc++.h>

using namespace std;

unsigned long int ans[100]={0};

unsigned long int recur(int n){
	if(n == 1 || n == 2){
		return 1;
	}else{
		if(ans[n] != 0){
			return ans[n];
		}else{
			ans[n] = recur(n-1)*3 + recur(n-2);
			return ans[n];
		}
	}
}

int main(){
	int n;
	cin >> n;
	cout<<recur(n);
}
