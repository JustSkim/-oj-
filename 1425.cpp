#include<stdio.h>
#include<iostream> 
#include<cstring>
using namespace std;

int n,m,index,MAX,RANGE;
int arr[1000000];
int number[1000000];
int main(){
	MAX=1000000;
	RANGE=500000;
	memset(number,0,sizeof(number));
	while(scanf("%d%d",&n,&m)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			number[arr[i]+RANGE]++;
		}
		index=0;
		for(int i=0;i<MAX;i++){
			while(number[i]--){
				arr[index++]=i-RANGE;
			}
		}
		for(int i=n-1;i>=n-m;i--){
			if(i==n-m)
				printf("%d\n",arr[i]);
			else 
				printf("%d ",arr[i]);
		}
	}	
	return 0;
} 
