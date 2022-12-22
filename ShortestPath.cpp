#include <iostream>
using namespace std;
int arr[1001][1001] = {0};
int value[1001][1001] = {0};
int visited[1001] = {0};
int minv = 9999;
bool flag = true;
void findValue(int start, int end, int temp){
	if(start == end){
		if(minv > temp) minv = temp;
		flag = false;
		return;
	}
	for(int i = 0; i < 1001; i++){
		if(arr[start][i] == 1 && visited[i] == 0){
			visited[i] = 1;
			findValue(i, end, temp + value[start][i]);
			visited[i] = 0;
		}
	}
}
int main(int argc, char *argv[]) {
	int n, e;
	cin >> n >> e;
	for(int i = 0; i < e; i++){
		int e1, e2, v;
		cin >> e1 >> e2 >> v;
		arr[e1][e2] = 1;
		value[e1][e2] = v;
	}
	int start, end;
	cin >> start >> end;
	visited[start] = 1;
	findValue(start, end, 0);
	if(flag) cout << "999";
	else cout << minv;
}