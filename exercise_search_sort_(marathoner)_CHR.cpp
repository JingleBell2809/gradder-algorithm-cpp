#include <iostream>
using namespace std;

int main()
{
	int n_f;
	cin>>n_f;
	int f[1000];
	for(int i=0; i<n_f; i++)
	{
		cin>>f[i];
	}
	int n;
	cin>>n;
	int s_min_h=99999999;
	int s_min_m=99999999;
	int i_min;
	int c_min;
	
	for(int i=0; i<n; i++)
	{
		int t1, t2, t3;
		cin>>t1>>t2>>t3;
		
		int meet=0;
	
		for(int j=0; j<n_f; j++)
		{
			if(t1==f[j])
			{
				meet=1;
				break;
			}
		}	
		
		if(meet)
		{
			if((t2>=0 && t2<6) || (t2==6 && t3==0))
			{
				c_min++;
				
				if((t2<s_min_h) || (t2==s_min_h && t3<s_min_m))
				{
					s_min_h=t2;
					s_min_m=t3;
					i_min=t1;
				}
			}
		}	
	}
	
	cout<<i_min<<" "<<c_min<<endl;	
}





