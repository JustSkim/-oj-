#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
/*
In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 

Input
The input will consist of a series of integers n, one integer per line.
输入将由一系列整数n组成，每行一个整数。

Output
For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
对于每种情况，在一行中输出SUM（n），然后输出空白行。您可以假设结果将在32位有符号整数的范围内。
*/
int main(){
	int n;
	int sum=0;
	while(cin>>n){
		sum=0;
		for(int i=0;i<=n;i++)
			sum+=i; 
		cout<<sum<<"\n"<<endl;
		//输出结果后要换行 
	}
	return 0;
}
