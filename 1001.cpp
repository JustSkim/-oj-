#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
/*
In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 

Input
The input will consist of a series of integers n, one integer per line.
���뽫��һϵ������n��ɣ�ÿ��һ��������

Output
For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
����ÿ���������һ�������SUM��n����Ȼ������հ��С������Լ���������32λ�з��������ķ�Χ�ڡ�
*/
int main(){
	int n;
	int sum=0;
	while(cin>>n){
		sum=0;
		for(int i=0;i<=n;i++)
			sum+=i; 
		cout<<sum<<"\n"<<endl;
		//��������Ҫ���� 
	}
	return 0;
}
