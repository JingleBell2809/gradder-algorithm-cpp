#include <iostream>
using namespace std;

int arr[100][100];

int Walk(int m,int n){
	if(m==0 || n==0){

		return 0;
	}
	if(m==1 && n==1){

		return 1;
	}else{
		if(arr[m][n] == 0){

			arr[m][n] = Walk(m-1,n) + Walk(m,n-1);

			return arr[m][n];
		}else{

			return arr[m][n];
		}
	}
}

int main(){
	int m,n;
	cin >>m>>n;
	cout<<Walk(m,n);
}
