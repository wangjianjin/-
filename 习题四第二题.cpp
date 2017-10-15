#include<iostream.h>
void main()
{
	int year,leap,count=0;
	for(year=2000;year<=3000;year++)
	{
		if(year%400==0)
			leap=1;
		else
			if(year%4==0&&year%100!=0)
				leap=1;
			else
				leap=0;
			if(leap==1)
			{
				printf("%6d",year);
				count++;
				if(count%5==0)
					printf("/n");
			}
	}
}