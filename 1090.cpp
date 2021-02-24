#include<stdio.h>// 执行 printf() 函数需要该库
#include<iostream>
using namespace std;
/*

Problem Description
Your task is to Calculate a + b.
 

Input
Input contains an integer N in the first line, and then N lines follow. Each line consists of a pair of integers a and b, separated by a space, one pair of integers per line.
输入的第一行包含一个整数N，然后是N行。每行由一对整数a和b组成，每对之间用空格隔开，每行一对整数。

Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
对于每对输入整数a和b，您应该在一行中输出a和b的总和，并且在输入中每行输出一行。

Sample Input（样本输入） 
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
