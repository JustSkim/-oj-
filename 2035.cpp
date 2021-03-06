#include<iostream>
#include<cstdio>
/*
��A^B�������λ����ʾ��������
˵����A^B�ĺ����ǡ�A��B�η���
 

Input
�������ݰ����������ʵ����ÿ��ʵ��ռһ�У�������������A��B��ɣ�1<=A,B<=10000�������A=0, B=0�����ʾ�������ݵĽ�������������
 

Output
����ÿ������ʵ���������A^B�������λ��ʾ��������ÿ�����ռһ�С�
 

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
const int mod=1000;	//���������λ�����ȡģ1000 
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
