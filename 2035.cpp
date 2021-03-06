#include<iostream>
#include<cstdio>
/*
求A^B的最后三位数表示的整数。
说明：A^B的含义是“A的B次方”
 

Input
输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。
 

Output
对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。
 

Sample Input
2 3
12 6
6789 10000
0 0
 

Sample Output
8
984
1

*/
using namespace std;
const int mod=1000;	//保留最后三位，因此取模1000 
int QuickPower(int x,int n){
	int answer = 1;
	while(n!=0){
		if(n%2==1){
			answer*=x;
			answer%=mod;
		}
		n/=2;
		x*=x;
		x%=mod;
	}
	return answer;
} 

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)break;
		printf("%d\n",QuickPower(a,b));
	} 
	return 0;
}
