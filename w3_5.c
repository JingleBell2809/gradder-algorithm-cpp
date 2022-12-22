#include<stdio.h>
int bag = 10;
int weight[5] = {1,5,3,2,4};
int value[5] = {5,9,10,6,7};

int ans[5] = {0,0,0,0,0};
int size = 5;
int maxvalue = 0;

void brute(int j)
{
	int sum_weight = 0;
	int sum_value = 0;
    if(j == size)
    {
		for(int i=0;i<size;i++){
			if(ans[i]==1){
				sum_weight = sum_weight + weight[i];
				sum_value = sum_value + value[i]; 
			}
		}
		if(sum_weight<=bag)
		{
			if(sum_value>maxvalue)
			{
				maxvalue = sum_value;
				for(int i=0;i<size;i++){
					printf("%d ",ans[i]);
				}
				printf("\n");
			}
		}
	}
    else
    {
        int num = j+1;
        ans[j] = 0;
        brute(num);
        ans[j] = 1;
        brute(num);
    }
}
int main()
{
	brute(0);
	printf("%d",maxvalue);
}

