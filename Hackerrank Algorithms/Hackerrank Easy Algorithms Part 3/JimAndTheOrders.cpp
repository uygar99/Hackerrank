#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[i]=a+b;
	}
	
	for(int k=0;k<size;k++)
	{
		int min=100000000,temp;
		for(int i=0;i<size;i++)
		{
			if(arr[i]<min && arr[i]!=0) 
			{
				min=arr[i];
				temp=i;
			}
		}
		for(int i=0;i<size;i++)
		{
			if(arr[i]==min) 
			{
				cout<<temp+1<<' ';
				arr[i]=0;
				break;
			}
		}
	}
	
	
	return 0;
}
