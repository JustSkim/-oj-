#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	/*
	Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 输入的第一行包含一个整数T（1 <= T <= 20），它表示测试用例的数量。然后是T行，每行由两个正整数A和B组成。请注意，整数非常大，这意味着您不应使用32位整数来处理它们。您可以假设每个整数的长度不超过1000。


Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
对于每个测试用例，您应该输出两行。第一行是“ Case＃：”，＃表示测试用例的编号。第二行是等式“ A + B = Sum”，Sum表示A + B的结果。请注意，该等式中有一些空格。在两个测试用例之间输出空白行。
	
	*/ 
	//杭电OJ平台要求必须先声明所有变量，再逐一赋值，否则报编译错误Complication Error， 
	int case_num;
	string a,b;
	string num[20];
	string str1[20],str2[20];
	void f1(string a,string b,string *num,int n);
	cin>>case_num;//需要计算的案例的个数 
	
	for(int i=0;i<case_num;i++){
		cin>>a>>b;
		str1[i]=a;
		str2[i]=b;
		if(a.length()>b.length())
			f1(a,b,num,i);
		else
			f1(b,a,num,i);
	}	
	int xu=0;
	for(;xu<case_num-1;xu++){
		cout<<"Case "<<xu+1<<":"<<endl;
		cout<<str1[xu]<<" + "<<str2[xu]<<" = "<<num[xu]<<"\n"<<endl;
		//输出多了或少了空格，空白行，会报错Presentation Error 
	}
	cout<<"Case "<<xu+1<<":"<<endl;
	cout<<str1[xu]<<" + "<<str2[xu]<<" = "<<num[xu]<<endl;
	//杭电oj平台，最后一个输出后面不能有多余的空白行，没错，就是这么严格 
	return 0;
	
}
void f1(string a,string b,string *num,int index){
	int l1,l2,i,j,sum,jinwei;//l1>l2
	string c;
	char x;
	l1=a.length();
	l2=b.length();
	sum=0;
	jinwei=0;
	i=l1-1;
	j=l2-1;
	while(j>=0){
		sum=(a[i]-'0')+(b[j]-'0')+jinwei;//相加之和
		if(sum>=10){
			jinwei=1;
			sum=sum%10;//取余 
		}else{
			jinwei=0;
		}
		x=sum%10+'0';
		c.push_back(x); //尾插法 
		j--;
		i--;
	}
	while(i>=0){
		if(a[i]==9 && jinwei==1){
			c.push_back('0');
		}else{
			sum=(a[i]-'0')+jinwei;
			x=sum%10+'0';
			c.push_back(x);
			jinwei=0;//因为有一次不满足9+1=10，之后进位均设为0 
		}
		i--;
	}
	if(jinwei==1){//全部遍历完成仍有进位 
		c.push_back('1');
	}
	reverse(c.begin(),c.end());//字符串翻转 
	num[index]=c;
}
