#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the lengths of the triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c)
	printf("Equilateral triangle");
	else if(a!=b && a!=c && b!=c)
	printf("Scalene triangle");
	else
	printf("Isosceles triangle");
	return 0;
}
