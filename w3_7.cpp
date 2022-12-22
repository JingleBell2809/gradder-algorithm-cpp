#include <iostream>
#include <math.h>
using namespace std;
int S[] = {1,3,0,5,5,8};
int E[] = {2,4,6,7,9,9};
int ans[] = {0,0,0,0,0,0};
int size= 6;
int start,endx,maxcount=0;
void brute(int j)
{
	int count=0,len=0,i,k;
    if(j == size)
    {
    	for(i=0;i<size;i++){
    		if(ans[i]==1)
    		len++;
		}
		for(i=0;i<size;i++){
			if(ans[i]==1){
				start = S[i];
				endx  = E[i];
				count = 1;
				break;
			}
		}
		for(k=i+1;k<size;k++){
			if(ans[k]==1 && endx<S[k]){
				count++;
				endx = E[k];
			}
		}
		if(len>=count){
			if(maxcount<count){
				maxcount = count;
			}
			if(count==len){
				for(i=0;i<size;i++){
    				cout<<ans[i]<<" ";
				}
				cout<<endl;
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
int main(){
	brute(0);
	cout<<maxcount;
}
