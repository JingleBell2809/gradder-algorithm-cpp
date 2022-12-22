#include<stdio.h>
main()
{
	int Insertion[100], size=0, X;
	
	while(scanf("%d",&X))
	{
		Insertion[size]=X;
		size++;
	}
	
	int  tmp, j;
	
	for(int i=0; i<size; i++)
	{
		tmp = Insertion[i];
		j = i - 1;
		
        for(int a=0; a<size; a++)
		{
        	printf("%d ",Insertion[a]);
        }
        
        printf("\n");
        
        while (j>=0 && Insertion[j]>tmp)
		{
            Insertion[j+1] = Insertion[j];
            j=j-1;
        }
        
        Insertion[j+1] = tmp;
    }
    
    for(int i=0; i<size; i++)
	{
    	printf("%d ",Insertion[i]);
    }
    
}



  
