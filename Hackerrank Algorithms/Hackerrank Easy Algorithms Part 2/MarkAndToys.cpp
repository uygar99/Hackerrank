#include <iostream>
#include <math.h>
using namespace std;


int main() {
	long long int size,money;
	cin>>size>>money;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	long long int counter=0;
	while (true)
	{
		long long int min=100000000;
		for(long long int i=0;i<size;i++)
		{
			if(arr[i]<min && arr[i]!=0) min=arr[i];
		}
		for(long long int i=0;i<size;i++)
		{
			if(arr[i]==min) 
			{
				arr[i]=0;
				break;
			}
		}
		if(money-min<=0) break;
		else 
		{
			money=money-min;
			counter++;
		}
	}
	cout<<counter;
	return 0;
}
