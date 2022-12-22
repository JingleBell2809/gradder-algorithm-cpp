#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int arr[n],max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
	}
	int ans[max];
	for(int i=0;i<=max;i++){
		ans[i]=0;
	}
	for(int i=0;i<n;i++){
		ans[arr[i]]++;
	}	
	for(int i=1;i<=max;i++){
		ans[i]+=ans[i-1];
	}
	int sort[n];
	for(int i=n-1;i>=0;i--){
		sort[ans[arr[i]]-1]=arr[i];
		ans[arr[i]]--;
	}
	int num;
	scanf("%d",&num);
	if(num==1){
		for(int i=n-1;i>n/2;i--){
			printf("%d ",sort[i]);
		}
		for(int i=0;i<=n/2;i++){
			printf("%d ",sort[i]);
		}
	}else if(num==2){
		for(int i=0;i<n;i++){
			if(sort[i]%2==0){
				printf("%d ",sort[i]);
			}
		}
		for(int i=n-1;i>=0;i--){
			if(sort[i]%2!=0){
				printf("%d ",sort[i]);
			}
		}
	}
}
