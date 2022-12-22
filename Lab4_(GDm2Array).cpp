#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

void GDm(int A[], int B[], int n, int ans)
{
	int maxA = *max_element(A, A+n); 
	int minA = *min_element(A, A+n); 
	int maxB = *max_element(B, B+n); 
	int minB = *min_element(B, B+n); 
	
	if(maxA+minB >= ans   &&   minA+maxB >= ans)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}

int main()
{
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		int n;
		cin>>n;
		
		int A[n];
		for(int j=0; j<n; j++)
		{
			cin>>A[j];
		}
		
		int B[n];
		for(int j=0; j<n; j++)
		{
			cin>>B[j];
		}
		
		int ans;
		cin>>ans;
		
		GDm(A, B, n, ans); 
	}
	return 0;
}
