#include<iostream.h>
#include<string.h>
void main()
{
	int n,p,q;
	char a[100];
	char b[100];
	cout<<"输入要插入的位置为n处";
	cin>>n;
	p=a[100];
	q=b[100];
	if(strlen(a)>=n)
	{
		p+=n-1;
		for(q=0;*q!='\0';p++,q++)
		{
			*p=*q;
		}
	}
	cout<<"string a:"<<a<<endl'
}


