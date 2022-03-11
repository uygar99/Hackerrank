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
	int unique;
	for(int i=0;i<size;i++)
	{
		int flag=true;
		for(int j=0;j<size;j++)
		{
			if(arr[j]==arr[i] && j!=i)
			{
				flag=false;
			} 
		}
		if(flag) unique=arr[i];
	}
	cout<<unique;
	return 0;
}
