#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character\n");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	printf("Character is a lowercase alphabet");
	else if(c>='A' && c<='Z')
	printf("Character is an uppercase alphabet");
	else
	printf("Character is not an alphabet");
	return 0;
}
