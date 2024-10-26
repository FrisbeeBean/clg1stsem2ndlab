#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the points of the three techniques\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d",a);
	else if(b>a && b>c)
	printf("%d",b);
	else if(c>a && c>b)
	printf("%d",c);
	else
	printf("%d",a);
	return 0;
}
