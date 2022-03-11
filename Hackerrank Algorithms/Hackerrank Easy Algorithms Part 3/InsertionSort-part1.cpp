#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int number=arr[size-1];
	for(int i=size-2,k=0;k<size;i--,k++)
	{
		if(number<arr[i]) arr[i+1]=arr[i];
		for(int j=0;j<size;j++)
		{
			cout<<arr[j]<<' ';
		}
		if(number<arr[i+1] && number>arr[i-1]) {
			arr[i]=number;
			cout<<'\n';
			for(int j=0;j<size;j++)
			{
				cout<<arr[j]<<' ';
			}
			break;
		}
		cout<<'\n';
	}
	return 0;
}
