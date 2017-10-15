#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,l,s;
	cin>>a>>b>>c;
	l=(a+b+c）%2;
	s=(l*(l-a)*(l-b)*(l-c));
	cout<<"三角形面积:"<<"s="<<endl;
}