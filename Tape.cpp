#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int n;

void print(){
	for(int i=0;i<v.size() ;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x); 
	}
	sort(v.begin() ,v.end());
	//print();
	float ans=0,sum=0;
	for(int i=0;i<n;i++){
		sum=sum+v[i];
		ans=ans+sum;
	}
	ans=ans/n;
	ans=floor(ans*100)/100;
	cout<<ans<<endl;
	return 0;
}
