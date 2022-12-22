#include<stdio.h>
main()
{
	int Selection[100], size=0, X;
	
	while(scanf("%d",&X))
	{
		Selection[size]=X;
		size++;
	}
	
	for(int i=0; i<size; i++)
	{
		
        for(int i=0; i<size; i++) 
		{
        	printf("%d ",Selection[i]);
        }
        
        printf("\n");
        int t=i;
        
        for(int j=i; j<size; j++)
		{
			
            if(Selection[t]>Selection[j])
			{
                t=j;
            }
            
        }
        
        int tmp = Selection[i];
        Selection[i] = Selection[t];
        Selection[t] = tmp;
        
    }
    
    for(int i=0;i<size;i++)
	{
    	printf("%d ",Selection[i]);
    }
    
}



     
    
   

