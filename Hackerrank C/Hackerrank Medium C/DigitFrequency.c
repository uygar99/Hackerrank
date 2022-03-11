#include <stdio.h>
#include <string.h>

int main()
{
	int i=0;
	int counter=0;
	int length;
	char s[10000];
	while(1)
	{
		char ch;
		scanf("%c" ,&ch);
		s[i]=ch;
		i++;
		if(ch=='\n') break;
	}
	length = strlen(s);
	char x='0';
	for(i=0;i<length;i++)
	{
		if(s[i]==x) counter++;
		if(i==length-1) 
		{
			printf("%d " ,counter);
			counter=0;
			x++;
			i=-1;
		}
		if(x>'9') break;
	}
	return 0;
}
