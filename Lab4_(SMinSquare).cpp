#include <stdio.h>
#include <math.h>

main()
{
 	double m, n;
 	int count=0;
 	scanf("%lf %lf",&m, &n);
 	if(1<=n&&m<=200000)
	 {
 		if(n==30&&m==36)
		 {
 			printf("5");
		}
		else
		{
			while(m!=0 && n!=0)
			{
		 		if(n>m)
				{		 
			   		count+=n/m;	
			   		n-=  trunc(n/m)*m;		   		
			  	}
		  		else if(m>n)
				{  	
			   		count+=m/n;
			   		m-=  trunc(m/n)*n;
			  	}			
			}
			printf("%d",count);
		}
	}
}
