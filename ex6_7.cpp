#include<iostream.h>
#include<stdio.h>
#define M 100
#define N 100
int main()
{
	int i,j,k,a[N][M],max,maxj,flag;
	cout<<"����������";
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			cin>>a[i][j];
			for(i=0;i<N;i++)
			{
				max=a[i][0];
				max j=0;
				for(j=0;j<M;j++)
					if(a[i][j]>max��
					{
						max=a[i][j];
						maxj=j;
					}
					flag=1;
					for(k=0;k<N;k++)
						if(max>a[k][maxj])
						{
							flag=0;
							continue;
						}
						if(flag=1)
						{
							cout<<"����Ϊ"<<"a[i][j]="<<max<<endl;
							break;
						}
				}
				if(flag=0)
					cout<<"û�а���"<<endl;
}






