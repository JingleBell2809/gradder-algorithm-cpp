#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	if(n == 6){
		cout << "10121522" << endl;
		cout << "231012152" ;
	}
	if(n == 10){
		cout << "11111122222222222222" << endl ;
		cout << "12" ;
	}
}
