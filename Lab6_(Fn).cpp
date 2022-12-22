#include <bits/stdc++.h>
using namespace std;

unsigned long int ans[100]; 

int fn(int n){
	if(n<5 && n>=0){
		return n+1;
	}
	if(ans[n]!=0){
		return ans[n];
	}else{
		int sum=0;
		for(int i=1;i<=5;i++){
			sum+=fn(n-i);
		}
		sum+=13;
		ans[n]=sum;
		return ans[n];
	}
}

int main(){
	int n;
	cin>>n;
	cout<<fn(n);
}
