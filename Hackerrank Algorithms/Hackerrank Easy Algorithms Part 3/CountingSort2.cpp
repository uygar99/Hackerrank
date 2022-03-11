#include <iostream>
using namespace std;

int main ()
{
	int size,max=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		if(arr[i] > max) max=arr[i];
	}
	int newarr[max+1];
	for(int i=0;i<max+1;i++)
	{
		newarr[i]=0;
	}
	for(int i=0;i<size;i++)
	{
		newarr[arr[i]]++;
	}
	for(int i=0;i<max+1;i++)
	{
		while(newarr[i])
		{
			cout<<i<<' ';
			newarr[i]--;
		}
	}
	return 0;
}
