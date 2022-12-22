#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>=3 && n<1000){
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			int min = i;
			for(int j=i+1;j<n;j++){
				if(arr[min] > arr[j]){
					min = j;
				}
			}
			int t = arr[min];
			arr[min] = arr[i];
			arr[i] = t;
		}	
		int min=arr[n-1];
		int max=0;
		for(int i=n-2;i>=0;i--){
			if(min<=max){
				min+=arr[i];
			}else{
				max+=arr[i];
			}
		}
		if(min>max){
			cout<<min-max;
		}else{
			cout<<max-min;
		}
	}
}
