#include <iostream>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	long long int counter=0;
	while(true)
	{
		long long int min=100000;
		for(long long int i=0;i<size;i++)
		{
			if(arr[i]<min && arr[i]!=-1) min=arr[i];
		}

		bool flag=true,flag2=false;
		for(long long int i=0;i<size;i++)
		{
			if(arr[i]<=min+4) 
			{
				arr[i]=-1;
				flag2=true;
			}
		}
		if(flag2==true) counter++;
		
		for(long long int i=0;i<size;i++)
		{
			if(arr[i]!=-1) flag=false;
		}
		if(flag) break;
	}
	cout<<counter;
	
	return 0;
}
