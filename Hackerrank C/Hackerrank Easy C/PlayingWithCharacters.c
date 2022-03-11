#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char ch;
	char s[100];
	char s1[200];
	scanf("%c%*c",&ch);
	scanf("%s%*c",&s);
	scanf("%[^\n]",&s1);
	printf("%c\n",ch);
	printf("%s\n",s);
	printf("%s",s1);
	return 0;
}
