#include<stdio.h>
#include<iostream>
using namespace std;
/*
��a��b����С������
��Դpoj,hdu
Ҳ���� a*b/gcd(a,b)��gcd(a,b)�ó��������Լ�� 
*/
int main(){
	int a,b;
	int gcd(int min,int max);
	while(cin>>a>>b){
		if(a==0 || b==0)cout<<0<<endl;//0���ų� 
		else if(a==b)cout<<a<<endl;
		else if(a<b)cout<<a*b/gcd(a,b)<<endl;
		else cout<<a*b/gcd(b,a)<<endl;
	}
}

int gcd(int min,int max){
	int temp;
	if(min==1)return 1;
	else if(max%min==0)return min;
	else{
		temp=max%min;//temp��Ȼ��min 
		return gcd(temp,min); 
	}
}
