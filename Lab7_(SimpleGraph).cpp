#include <bits/stdc++.h>
using namespace std;

int ans[101][101];
int visited[101];
int v,e,s,en,c=0,maxnum;

void DFS(int n){
	visited[n]=1;

	if(n == en){
		c++;
		return;
	}else{
		for(int i=0;i<=maxnum;i++){
			if(ans[n][i]==1 && visited[i]!=1){
				DFS(i);				
				visited[i]=0;
			}
		}
	}
}

int main(){
	int m,n;
	cin >> v >> e;
	for(int i=0;i<e;i++){
		cin >> m >> n;
		if(i==0){
			maxnum=max(m,n);
		}else{
		if(maxnum < max(m,n)){
			maxnum = max(m,n);
		}
		}
		ans[m][n]=1;
	}
	
	cin >> s >>en;
	DFS(s);
	cout<<c;
}
