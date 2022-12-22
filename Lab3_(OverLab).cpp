#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arrA[n],arrB[n],max=0;
	for(int i=0;i<n;i++)
	{
		cin>>arrA[i];
		if(max<arrA[i])
		{
			max=arrA[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cin>>arrB[i];
		if(max<arrB[i])
		{
			max=arrB[i];
		}
	}
	int *freq = new int[max+1];
	for(int i=0;i<n;i++)
	{
		freq[arrA[i]]=0;
		freq[arrB[i]]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(arrA[i]!=arrB[i])
		{
			freq[arrA[i]]++;
			freq[arrB[i]]++;
		}else{
			freq[arrA[i]]++;
		}
	}
	
	int maxf=freq[arrA[0]],num;
	for(int i=0;i<n;i++)
	{
		if(freq[arrA[i]]>maxf)
		{
			maxf=freq[arrA[i]];
			num=arrA[i];
		}
		if(freq[arrB[i]]>maxf)
		{
			maxf=freq[arrB[i]];
			num=arrB[i];
		}
	}
	cout <<num<<" "<<maxf;
}
