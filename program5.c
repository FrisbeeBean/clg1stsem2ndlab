#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c)
	printf("Equal");
	else 
	printf("Not equal");
	return 0;
}
