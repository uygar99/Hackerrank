#include <iostream>
using namespace std;

int main()
{
	int size,max=0,ability;
	cin>>size;
	cin>>ability;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max) max=arr[i];
	}
	if(max>ability)
	cout<<max-ability;
	else
	cout<<0;
	return 0;
}
