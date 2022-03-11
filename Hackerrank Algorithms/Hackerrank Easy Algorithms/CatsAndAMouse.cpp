#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	int arr[size*3];
	for(long long int i=0;i<size*3;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<size*3;i=i+3)
	{
		if(abs(arr[i]-arr[i+2]) == abs(arr[i+1]-arr[i+2])) cout<<"Mouse C"<<'\n';
		if(abs(arr[i]-arr[i+2]) > abs(arr[i+1]-arr[i+2])) cout<<"Cat B"<<'\n';
		if(abs(arr[i]-arr[i+2]) < abs(arr[i+1]-arr[i+2])) cout<<"Cat A"<<'\n';
	}
	
	return 0;
}
