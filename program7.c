#include<stdio.h>
int main()
{
	int p,ch,b,m,co;
	float per;
	printf("Enter the marks of the subjects in the order of physics,chemistry,biology,maths,computer\n");
	scanf("%d %d %d %d %d",&p,&ch,&b,&m,&co);
	per=(p+ch+b+m+co)/5.0;
	if(per>=90)
	printf("Grade A");
	else if(per<90 && per>=80)
	printf("Grade B");
	else if(per>=70 && per<80)
    printf("Grade C");
	else if(per>=60 && per<70)
	printf("Grade D");
	else if(per>=40 && per<60)
	printf("Grade E");
	else
	printf("Grade F");
	return 0;	
}
