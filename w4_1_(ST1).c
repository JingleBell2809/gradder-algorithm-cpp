#include<stdio.h>
main()
{
	int Bubble[100], size=0, X;
	
	while(scanf("%d",&X))
	{
		Bubble[size]=X;
		size++;
	}
	
	for(int i=0; i<size; i++)
	{
		
		for(int a=0; a<size; a++)
		{
			printf("%d ",Bubble[a]);
		}
		
		printf("\n");
		
		for(int a=0; a<=(size-i)-1; a++)
		{
			
			if(Bubble[a]>Bubble[a+1])
			{
				int tmp = Bubble[a+1];
				Bubble[a+1]=Bubble[a];
				Bubble[a]=tmp;
			}
					
		}
			
	}
		
}







