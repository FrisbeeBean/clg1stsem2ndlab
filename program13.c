#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character\n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	printf("Character is a vowel");
	else 
	printf("Character is a consonant");
	return 0;
}
