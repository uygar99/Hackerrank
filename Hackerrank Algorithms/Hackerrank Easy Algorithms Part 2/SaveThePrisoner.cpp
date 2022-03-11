#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long int size,maxcounter=0;
	cin>>size;
	long long int arr[size*3];
	for(long long int i=0;i<size*3;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<size*3;i=i+3)
	{
		long long int prisoners,candies,start,x;
		prisoners=arr[i];
		candies=arr[i+1];
		start=arr[i+2];
		x=(start+candies)%prisoners;
		if(x==0) x=prisoners-1;
		else if(x==1) x=prisoners;
		else x=x-1;
		if(x==0) x=1;
		cout<<x<<'\n';	
	}
	
	
	
	
	return 0;
}
