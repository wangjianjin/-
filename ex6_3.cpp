#include<iostream.h>
void main()
{
	int i,j,sum=0;
	int a[4][4];
	cout<<"����16����";
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(i=j)
				{
					sum=sum+a[i][j];
				}
				if(i>j)
				{
					a[i][j]=a[i][j]+1;
					for(i=0;i<4;i++)
						for(j=0;j<4;j++)
							cout<<a[i][j]<<" "<<endl;
						cout<<"���Խ��ߺ�Ϊ:"<<sum<<endl;
				}
}
