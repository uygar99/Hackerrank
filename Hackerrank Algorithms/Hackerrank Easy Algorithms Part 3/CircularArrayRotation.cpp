#include <iostream>
using namespace std;
void rotator(long long int arr[],long long int a, long long int b)
{
	int arr2[b];
	for(int i=0;i<b;i++)
	{
		arr2[i]=arr[i];
	}
	for(int j=0;j<a;j++)
	{
		for(int i=0;i<b;i++)
		{
			arr[i+1]=arr2[i];
			arr[0]=arr2[b-1];
		}
		for(int i=0;i<b;i++)
		{
			arr2[i]=arr[i];
		}
	}
	return;
}

int main()
{
	long long int size,rotatecount,queries;
	cin>>size>>rotatecount>>queries;
	long long int arr[size];
	long long int arr3[queries];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	rotator(arr,rotatecount,size);
	for(long long int i=0;i<queries;i++)
	{

		cin>>arr3[i];
		
	}
	for(long long int i=0;i<queries;i++)
	{

		cout<<arr[arr3[i]]<<'\n';		
	}

	return 0;
}
