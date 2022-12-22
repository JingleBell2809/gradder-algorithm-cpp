#include<bits/stdc++.h>
using namespace std;

int my_c[1000];
int m_s=1000;

int main()
{
	int s;
	cin>>s;
	int a[s];	
	for (int i=0; i<s; i++)
	{
		cin>>a[i];
	}
   
   for(int i=0; i<s; i++)
   {
      my_c[a[i]]++;
   }
   
   int m_max = -999999;
   int m_min = 999999;
   
   for(int i=0; i<m_s; i++)
   {
		if( my_c[i] > m_max )
    	{
      		m_max = my_c[i];
    	}
     	if (my_c[i]>0 && my_c[i]<m_min )
    	{
     	 	m_min = my_c[i];
   		}
    }
    cout<< m_max - m_min <<endl;
      
    return 0;
}
   
