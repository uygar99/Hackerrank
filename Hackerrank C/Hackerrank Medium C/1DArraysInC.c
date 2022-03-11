#include <stdio.h>
int main()
{
	int n,i;
	int sum=0;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++)
	{
		int a=arr[i];
		scanf("%d" ,&a);
		sum=sum+a;
	}
	printf("%d",sum);
	return 0;
}
