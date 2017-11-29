#include<iostream.h>
define N 20
void main()
{
	int b[N],i;
	int b[0]=1,b[1]=1;
	for(i=2;i<N;i++)
		b[i]=b[i-1]+b[i-2];
	for(i=0;i<N;i++)
		cout<<b[i]<<" "<<endl;
}