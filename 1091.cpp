#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){//EOF �� End Of File ����д
		if(a==0&&b==0)break;
		printf("%d\n",a+b);
	}
	return 0;
} 
