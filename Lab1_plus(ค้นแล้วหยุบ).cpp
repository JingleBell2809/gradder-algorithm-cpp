#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
	int m[1000];
	int o[1000];
	int num=0;
	
	for(int i=0; i<size; i++)
	{
		for(int j=5; j>1; j--)
		{
			int mid=(int)pow(10.0,j*1.0);
			int dv=(int)pow(10.0, (j-1)*1.0);
			int t=(a[i]%mid)/dv;
			
			if(t>0)
			{
				m[num]=t;
				num++;
			}
		}
		m[num]=a[i]%10;
		num++;
	}
	
	int l_index=0;
	o[l_index]=m[0];
	l_index++;
	//cout<<m[0]<<"";
	
	for(int i=0; i<num; i++)
	{
		if(m[i]!=o[l_index-1])
		{
			o[l_index]=m[i];
			l_index++;
		}
		cout<<m[i]<<",..,";
	}
	cout<<endl;
	
	for(int i=0; i<l_index; i++)
	{
		cout<<o[i];
	}	
}


