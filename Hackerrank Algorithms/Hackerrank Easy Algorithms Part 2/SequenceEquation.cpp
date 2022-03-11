#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size+1];
	int newArr[size+1];
	for(int i=1;i<size+1;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<size+1;i++)
	{
		newArr[arr[arr[i]]]=i;
	}
	for(int i=1;i<size+1;i++)
	{
		cout<<newArr[i]<<'\n';
	}
	return 0;
}
