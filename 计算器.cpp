#include<bits/stdc++.h>
using namespace std;
int main()
{
	double long sum,sum1,sum2;
	char a;
	while(true)
	{
		cout<<"�������һ����ֵ�Լ��������(+,-,*,/,#(����������))�͵ڶ�����ֵ:";
		cin>>sum1>>a>>sum2;
		if(a=='+')sum=sum1+sum2;
		if(a=='-')sum=sum1-sum2;
		if(a=='*')sum=sum1*sum2;
		if(a=='/')
		{
			if(sum2==0)
			{
				cout<<"�ڶ�����������Ϊ��"<<endl<<endl;
				continue;
			}
			else sum=sum1/sum2;
		}
		if(a=='#')return 0;
		cout<<"����:"<<sum<<endl<<endl;
	}
}
