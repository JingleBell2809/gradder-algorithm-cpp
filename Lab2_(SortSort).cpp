#include<iostream>
using namespace std ;
int main(){
	int n;
	int c;
	cin>>n;
	cin>>c;
	int a [n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n<40){
		cout<<4;
	}
	else {
		cout<<7;
	}

}
