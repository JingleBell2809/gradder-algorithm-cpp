#include <iostream>
using namespace std;
int main(){
	int K , Number_K , N , Number_N , hour , minute , l = 0 ,finish = 0 , bestfinish = 0 , copy = 0;
	cin >> K;
	if(K > 1 && K <= 100){
		int arr[K];
		for(int i = 0 ; i < K ; i++){
			cin >> Number_K;
			if(Number_K >= 1 && Number_K <= 1000000){
				arr[i] = Number_K;	
			}
			else{
				cout << "Input Again !!!";
			}
		}
		cin >> N;
		if(N > K && N <= 1000){
			int arr1[N][3];
			for(int i = 0 ; i < N ; i++){
				cin >> Number_N;
				arr1[i][0] = Number_N;
				cin >> hour;
				arr1[i][1] = hour;
				cin >> minute;
				arr1[i][2] = minute;	
			}
			int arr2[K][3];
			for(int i = 0 ; i < K ; i++){
				for(int j = 0 ; j < N ;j++){
					if(arr[i] == arr1[j][0]){
						if(arr1[j][1] == 6 && arr1[j][2] == 0){
							arr2[l][0] = arr1[j][0];
							arr2[l][1] = arr1[j][1];
							arr2[l][2] = arr1[j][2];
							finish++;
							l++;
						}
						else if(arr1[j][1] < 6 && arr1[j][1] > 0 && arr1[j][2] >= 0 && arr1[j][2] <= 59){
							arr2[l][0] = arr1[j][0];
							arr2[l][1] = arr1[j][1];
							arr2[l][2] = arr1[j][2];
							finish++;
							l++;
						}
						
					}
				}
				
			}
			for(int i = 0 ; i < finish ; i++){
				for(int j = i+1 ; j < finish ; j++){
					if(arr2[i][1] < arr2[j][1]) {
						bestfinish = arr2[i][0];
						i = finish;
						j = finish+1;
					}
					else if(arr2[i][1] == arr2[j][1]){
						if(arr2[i][2] < arr2[j][2]) bestfinish = arr2[i][0];
						else if(arr2[i][2] > arr2[j][2]) bestfinish = arr2[j][0];
					}
				}
			}
			cout << bestfinish << " " << finish ;
		}
		else{
			cout << "Input Again !!!";
		}	
	}
	else{
		cout << "Input Again !!!";
	}
}
