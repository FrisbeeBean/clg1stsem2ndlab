#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter the year and the month\n");
	scanf("%d %d",&y,&m);
	if(m>=1 && m<=12 && y>0)
	{
		if((y%4==0 && y%100!=0) || y%400==0)
		{
			if(m==2)
			printf("29");
			else if(m==4||m==6||m==9||m==11)
			printf("30");
			else
			printf("31");
		}
		else if(m==2)
		printf("28");
		else if(m==4||m==6||m==9||m==11)
		printf("30");
		else
		printf("31");
	}
	else
	printf("Invalid input");
	return 0;
}
