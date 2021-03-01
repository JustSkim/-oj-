#include<stdio.h>
#include<iostream>
using namespace std;
/*
求a与b的最小公倍数
来源poj,hdu
也就是 a*b/gcd(a,b)，gcd(a,b)得出二者最大公约数 
*/
int main(){
	int a,b;
	int gcd(int min,int max);
	while(cin>>a>>b){
		if(a==0 || b==0)cout<<0<<endl;//0的排除 
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
		temp=max%min;//temp必然≤min 
		return gcd(temp,min); 
	}
}
