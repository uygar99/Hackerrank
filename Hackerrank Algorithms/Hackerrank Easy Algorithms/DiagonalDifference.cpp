#include <iostream>
using namespace std;

int main()
{
	int size,sum1=0,sum2=0;
	cin>>size;
	int arr[size][size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			int input;
			cin>>input;
			arr[i][j]=input;
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i==j) sum1=sum1+arr[i][j];
			if(i+j==size-1) sum2=sum2+arr[i][j];
		}
	}
	if(sum1>sum2) cout<<sum1-sum2;
	else cout<<sum2-sum1;
	
	return 0;
}
