#include <bits/stdc++.h>
using namespace std;

int v,e,nin[101],nout[101];
vector<int> que;
 
void addedges(vector<int> adj[], int m, int n){
	adj[m].push_back(n);
}

void DFS(vector<int> adj[], vector<int> &visited, int n){
	visited[n] = 0;
	for(int i=0;i<adj[n].size();i++){
		nout[n]++;
		nin[adj[n][i]]++;
		if(visited[adj[n][i]]==1){
			que.push_back(adj[n][i]);
			DFS(adj,visited,adj[n][i]);
		}
	}
	visited[n]=0;
}

void start_DFS(vector<int> adj[],int startN){
	vector<int> visited(v+1,1);
	que.push_back(startN);
	DFS(adj,visited,startN);
}

int main(){
	int m,n,first,max=0;
	cin >>v>>e;
	vector<int> adj[v+1];
	
	for(int i=0;i<e;i++){
		cin>>m>>n;
		if(i==0){
			first=m;
		}
		addedges(adj,m,n);
	}
	start_DFS(adj,first);
	for(int i=0; i<v; i++){
		if(max<abs(nin[que[i]]-nout[que[i]])){
			max = abs(nin[que[i]]-nout[que[i]]);
		}
	}
	cout<<max;
}
