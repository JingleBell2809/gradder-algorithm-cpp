#include <stdio.h>

int main()
{
	int n, k, check=1;
	scanf("%d",&n);
	int A[n], B[n], maxA=0, maxB=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
		if(A[i]>maxA)
		{
			maxA=A[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		scanf("%d",&B[i]);
		if(B[i]>maxB)
		{
			maxB=B[i];
		}
	}
	scanf("%d",&k);
	for(int i=0; i<n; i++){
		if(A[i]+maxB<k || B[i]+maxA<k)
		{
			check=0;
		}
	}
	if(check)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}




















