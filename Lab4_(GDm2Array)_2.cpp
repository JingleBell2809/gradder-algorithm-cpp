#include <stdio.h>

main()
{
	int m, n, max[2], min[2], k;
	scanf("%d",&m);
	int check[m];
	
	for(int a=0; a<m; a++)
	{
		scanf("%d",&n);
		scanf("%d",&k); max[0]=k; min[0]=k;
		for(int i=1; i<n; i++)
		{
			scanf("%d",&k);
			if(max[0]<k)
			{ 
				max[0]=k; 
			}
			if(min[0]>k)
			{ 
				min[0]=k; 
			}
		}
		scanf("%d",&k); max[1]=k; min[1]=k;
		for(int i=1; i<n; i++)
		{
			scanf("%d",&k);
			if(max[1]<k)
			{ 
				max[1]=k; 
			}
			if(min[1]>k)
			{ 
				min[1]=k; 
			}
		}
		scanf("%d",&k);
		if(max[0]+min[1]>=k && max[1]+min[0]>=k)
		{ 
			check[a]=1; 
		}
	}
	for(int i=0 ;i<m; i++)
	{
		if(check[i]==1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}
