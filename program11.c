#include<stdio.h>
int main()
{
	int y,m,d;
	printf("Enter the year,month,day\n");
	scanf("%d %d %d",&y,&m,&d);
	if((m>=1 && m<=12) && y>=0 && d<=31)
	{
		if((y%4==0 && y%100!=0) || y%400==0)
		{
			if(m==2 && d==29)
			printf("1 3 %d",y);
			else if(m==2 && d>29)
			printf("Invalid input");
			else if((m==4||m==6||m==9||m==11) && d>30)
			printf("Invalid input");
            else if((m==1||m==3||m==5||m==7||m==8||m==10) && d==31)         
			printf("1 %d %d",m+1,y);
            else if(m==12 && d==31)
            printf("1 1 %d",y+1);
            else if((m==4||m==6||m==9||m==11) && d==30)
			printf("1 %d %d",m+1,y);
			else
			printf("%d %d %d",d+1,m,y);
		}
		else if(m==2 && d==28)
			printf("1 3 %d",y);
			else if(m==2 && d>28)
			printf("Invalid input");
			else if((m==4||m==6||m==9||m==11) && d>30)
			printf("Invalid input");
            else if((m==1||m==3||m==5||m==7||m==8||m==10) && d==31)         
			printf("1 %d %d",m+1,y);
            else if(m==12 && d==31)
            printf("1 1 %d",y+1);
            else if((m==4||m==6||m==9||m==11) && d==30)
			printf("1 %d %d",m+1,y);
			else
			printf("%d %d %d",d+1,m,y);
	}
	else
	printf("Invalid input");
	return 0;
}
