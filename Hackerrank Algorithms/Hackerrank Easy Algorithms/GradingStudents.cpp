#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
		if(arr[i]>=38 && (arr[i]%5)==3)
		{
			arr[i]=arr[i]+2;
		}
		if(arr[i]>38 && (arr[i]%5)==4)
		{
			arr[i]=arr[i]+1;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<'\n';
	}
	
	return 0;
}
