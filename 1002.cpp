#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
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
