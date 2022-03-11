#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int size,stationnum,max=0;
	cin>>size>>stationnum;
	int arr[stationnum];
	for(int i=0;i<stationnum;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		int station,min=10000;
		for(int j=0;j<stationnum;j++)
		{
			station=arr[j];
			if(abs(i-station)< min)  min=abs(i-station);
		}
		if(min>max) max=min;
	}
	cout<<max;
	
	return 0;
}
