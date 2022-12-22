#include <bits/stdc++.h>
using namespace std;

int min_cost = 100;
int s = 0;
int t_array[100];
int size = 4;
int dis[4][4] = { {9999,2,3,1},
				  {2,9999,4,5},
				  {3,4,9999,8},
				  {1,5,8,9999},};
void tsp(int j){
	if(j == size){
		int sum_distance = 0;
		int k = s;
		for(int i=0; i<size-1; i++){
			sum_distance += dis[t_array[i]-1][t_array[i+1]-1];
			k = t_array[i+1]-1;			
		}
		sum_distance += dis[k][s];						
					
		for(int i=0; i<size; i++){
			cout<<t_array[i]-1<<" ";
		}
		cout<<s<<" ";
		cout<<sum_distance<<endl;		
	} else{
		for(int i=j; i<size; i++){
			int T = t_array[j];
			t_array[j] = t_array[i];
			t_array[i] = T;
			tsp(j+1);
			T = t_array[j];
			t_array[j] = t_array[i];
			t_array[i] = T;
		}
	}
}
int main(){
	for(int i=0; i<100; i++){
		t_array[i] = i+1;
	}
	tsp(1);	cout<<endl;
}
