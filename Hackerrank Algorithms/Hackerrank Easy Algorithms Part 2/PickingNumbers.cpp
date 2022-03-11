#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int size,maxcounter=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		int counter=0,counter1=0,counter2=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]-arr[j]<=1 &&arr[i]-arr[j]>=0) counter1++;
			if(arr[j]-arr[i]<=1 &&arr[j]-arr[i]>=0) counter2++;
			
			
		}
		if(counter1>counter2) counter=counter1;
		if(counter2>=counter1) counter=counter2;
		if(counter>maxcounter) maxcounter=counter;

	}
	cout<<maxcounter;
	return 0;
}
