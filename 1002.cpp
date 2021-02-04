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
 ����ĵ�һ�а���һ������T��1 <= T <= 20��������ʾ����������������Ȼ����T�У�ÿ��������������A��B��ɡ���ע�⣬�����ǳ�������ζ������Ӧʹ��32λ�������������ǡ������Լ���ÿ�������ĳ��Ȳ�����1000��


Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
����ÿ��������������Ӧ��������С���һ���ǡ� Case������������ʾ���������ı�š��ڶ����ǵ�ʽ�� A + B = Sum����Sum��ʾA + B�Ľ������ע�⣬�õ�ʽ����һЩ�ո���������������֮������հ��С�
	
	*/ 
	//����OJƽ̨Ҫ��������������б���������һ��ֵ�����򱨱������Complication Error�� 
	int case_num;
	string a,b;
	string num[20];
	string str1[20],str2[20];
	void f1(string a,string b,string *num,int n);
	cin>>case_num;//��Ҫ����İ����ĸ��� 
	
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
		//������˻����˿ո񣬿հ��У��ᱨ��Presentation Error 
	}
	cout<<"Case "<<xu+1<<":"<<endl;
	cout<<str1[xu]<<" + "<<str2[xu]<<" = "<<num[xu]<<endl;
	//����ojƽ̨�����һ��������治���ж���Ŀհ��У�û��������ô�ϸ� 
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
		sum=(a[i]-'0')+(b[j]-'0')+jinwei;//���֮��
		if(sum>=10){
			jinwei=1;
			sum=sum%10;//ȡ�� 
		}else{
			jinwei=0;
		}
		x=sum%10+'0';
		c.push_back(x); //β�巨 
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
			jinwei=0;//��Ϊ��һ�β�����9+1=10��֮���λ����Ϊ0 
		}
		i--;
	}
	if(jinwei==1){//ȫ������������н�λ 
		c.push_back('1');
	}
	reverse(c.begin(),c.end());//�ַ�����ת 
	num[index]=c;
}
