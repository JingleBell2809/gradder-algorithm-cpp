#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int m[1000];
	char a[1000];
	int s_in;
	cin>>s_in;
	cin>>a;
	
	for(int j=0; j<s_in; j++)
	{
		m[j]= (int)a[j]-48 ;
	}
	
	int t = m[0];
	int c_t = 1;
	int ans[1000];
	int s_ans = 0;
	
	for(int i=1; i<s_in; i++)
	{
		if(t==m[i])
		{
			c_t++;
		}
		if(c_t>s_ans)
		{
			s_ans = c_t;
			for(int j=0; j<c_t; j++)
			{
				ans[j] = m[i+j+1-c_t];
			}
		}
		if(t!=m[i])
		{
			c_t = 1; 
			t = m[i];
		}		
	}

	for(int i=0; i<s_ans; i++)
	{
		cout<<ans[i];		
	}

}


