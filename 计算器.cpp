#include<bits/stdc++.h>
using namespace std;
int main()
{
	double long sum,sum1,sum2;
	char a;
	while(true)
	{
		cout<<"请输入第一个数值以及运算符号(+,-,*,/,#(结束计算器))和第二个数值:";
		cin>>sum1>>a>>sum2;
		if(a=='+')sum=sum1+sum2;
		if(a=='-')sum=sum1-sum2;
		if(a=='*')sum=sum1*sum2;
		if(a=='/')
		{
			if(sum2==0)
			{
				cout<<"第二个除数不能为零"<<endl<<endl;
				continue;
			}
			else sum=sum1/sum2;
		}
		if(a=='#')return 0;
		cout<<"答案是:"<<sum<<endl<<endl;
	}
}
