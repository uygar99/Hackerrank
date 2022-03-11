#include <iostream>
using namespace std;

int main()
{
	int size1;
	cin>>size1;
	int arr[size1];
	for(int i=0;i<size1;i++)
	{
		cin>>arr[i];
	}
	int size2;
	cin>>size2;
	int arr2[size2];
	for(int i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
	int temp[10001]={0};
	int temp2[10001]={0};
	for(int i=0;i<size1;i++)
	{
		temp[arr[i]]++;
	}
	for(int i=0;i<size2;i++)
	{
		temp2[arr2[i]]++;
	}
	for(int i=0;i<10001;i++)
	{
		if(temp[i]!=temp2[i]) cout<<i<<' ';
	}
	return 0;
}
