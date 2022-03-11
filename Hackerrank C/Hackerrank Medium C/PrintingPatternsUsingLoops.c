#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int temp=n;
	while(1)
	{
		for(i=temp;i>n;i--)
		{
			printf("%d ",i);
		}
		for(i=0;i<2*n-1;i++)
		{
			printf("%d ",n);
		}
		for(i=n;i<temp;i++)
		{
			printf("%d ",i+1);
		}
		n--;
		printf("\n");

		if(n==0) break;
	}
	n=2;
	while(1)
	{

		for(i=temp;i>n;i--)
		{
			printf("%d ",i);
		}
		for(i=0;i<2*n-1;i++)
		{
			printf("%d ",n);
		}
		for(i=n;i<temp;i++)
		{
			printf("%d ",i+1);
		}
		n++;
		printf("\n");

		if(n==temp+1) break;
	}
	return 0;
}
