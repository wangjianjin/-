#include<iostream.h>
#include<math.h>
void main()
{
	int a,b;
	cout<<"请输入两位整数："<<endl;
	cin>>a>>b;
	if(a/b==0);
	cout<<"a/b="<<a/b<<endl;
	else
		cout<<"a/b="<<(int)a/b<<"i"<<a%b<<endl;
}