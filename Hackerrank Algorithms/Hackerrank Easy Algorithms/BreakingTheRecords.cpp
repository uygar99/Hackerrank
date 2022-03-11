#include <iostream>
using namespace std;

int main()
{
	int size,max,min,maxcounter=0,mincounter=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min) {
			min=arr[i];
			mincounter++;
		}
		if(arr[i]>max) {
			max=arr[i];
			maxcounter++;
		}
	}
	
	cout<<maxcounter<<' ';
	cout<<mincounter;
	return 0;
}
