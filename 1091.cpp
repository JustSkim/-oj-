#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){//EOF ÊÇ End Of File µÄËõĞ´
		if(a==0&&b==0)break;
		printf("%d\n",a+b);
	}
	return 0;
} 
