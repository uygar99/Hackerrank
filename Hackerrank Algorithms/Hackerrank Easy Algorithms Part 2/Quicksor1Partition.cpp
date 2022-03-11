#include <iostream>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	long long int arr[size];
	long long int min[size];
	long long int max[size];
	for(int i=0;i<size;i++)
	{
		min[i]=0;
		max[i]=0;
	}
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	long long int pivot=arr[0];
	long long int mini=0,maxi=0;
	for(long long int i=1;i<size;i++)
	{
		
		if(arr[i]<pivot) {min[mini]=arr[i]; mini++;}
		if(arr[i]>pivot) {max[maxi]=arr[i]; maxi++;}
	}
	for(long long int i=0;i<size;i++)
	{
		if(min[i]==0) break; 
		cout<<min[i]<<' ';
	}
	cout<<pivot<<' ';
	for(long long int i=0;i<size;i++)
	{
		if(max[i]==0) break;
		cout<<max[i]<<' ';
	}
	return 0;
}
