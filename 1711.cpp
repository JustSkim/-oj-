#include<stdio.h>
#include<iostream>
using namespace std;
int arr2[10000];
int arr1[1000000];//第一行比第二行元素上限大 
int list[100];
/*
被迫暴力求解，超出限制
http://acm.hdu.edu.cn/showproblem.php?pid=1711 

Problem Description
Given two sequences of numbers : a[1], a[2], ...... , a[N], and b[1], b[2], ...... , b[M] (1 <= M <= 10000, 1 <= N <= 1000000). Your task is to find a number K which make a[K] = b[1], a[K + 1] = b[2], ...... , a[K + M - 1] = b[M]. If there are more than one K exist, output the smallest one.
 

Input
The first line of input is a number T which indicate the number of cases. Each case contains three lines. The first line is two numbers N and M (1 <= M <= 10000, 1 <= N <= 1000000). The second line contains N integers which indicate a[1], a[2], ...... , a[N]. The third line contains M integers which indicate b[1], b[2], ...... , b[M]. All integers are in the range of [-1000000, 1000000].
 

Output
For each test case, you should output one line which only contain K described above. If no such K exists, output -1 instead.
 

Sample Input
2
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 1 3
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 2 1
 

Sample Output
6
-1
 


*/
int main(){
	int num;
	int i,j;
	int compare(int arr1[],int arr2[],int l1,int l2); 
	cin>>num;
	for(int k=0;k<num;k++){
		cin>>i>>j;
		for(int m=0;m<i;m++)
			scanf("%d",&arr1[m]);
		for(int m=0;m<j;m++)
			scanf("%d",&arr2[m]);
		if(i<j)
			list[k]=compare(arr2,arr1,j,i);
		else
			list[k]=compare(arr1,arr2,i,j);
	}
	for(int k=0;k<num;k++)
		printf("%d",list[k]);
	return 0;
} 
int compare(int arr1[],int arr2[],int l1,int l2){//默认arr1不小于arr2
	int i,j;
	i=0;
	while(i<l1){
		j=0;
		while(j<l2){
			if(arr1[i]==arr2[j]){
				if(j==l2-1){
					return i-j; 
					if(l2==1 || (l2==2 && arr2[0]!=arr2[1]))i++;
					else if(l2==2 && arr2[0]==arr2[1])i+=0;
					else i-=(j-1);
					break;
				}
				else{
					i++;
					j++;
				}
			}
			else{
				if(l2==1 || (l2==2 && arr2[0]!=arr2[1]))i++;
				else if(l2==2 && arr2[0]==arr2[1])i++;
				else i-=(j-1);
				break;
			}
		}
	}
	return -1;
}
