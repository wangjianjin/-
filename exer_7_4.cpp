#include<iostream.h>
#include<iomanip.h>
void main()
{
	int a[10];
	int i,t,*p,*q;
	cout<<"请输入10个数:";
	for(i=0;i<10;i++)
		cin>>a[i];
		p=a;
		q=&a[9];
		while(p<q)
		{
			t=*p;
			*p=*q;
			*q=t;
			p++;
			q--;
		}
		cout<<"反序输出为:";
		for(i=0;i<10;i++)
			cout<<setw(3)<<a[i];
			cout<<endl;
}


