#include<stdio.h>// ִ�� printf() ������Ҫ�ÿ�
#include<iostream>
using namespace std;
/*

Problem Description
Your task is to Calculate a + b.
 

Input
Input contains an integer N in the first line, and then N lines follow. Each line consists of a pair of integers a and b, separated by a space, one pair of integers per line.
����ĵ�һ�а���һ������N��Ȼ����N�С�ÿ����һ������a��b��ɣ�ÿ��֮���ÿո������ÿ��һ��������

Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
����ÿ����������a��b����Ӧ����һ�������a��b���ܺͣ�������������ÿ�����һ�С�

Sample Input���������룩 
2
1 5
10 20
 

Sample Output
6
30

*/
int main(){
	int n,a,b;
	cin>>n;
	while(n--){
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
