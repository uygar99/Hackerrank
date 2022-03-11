#include <iostream>
#include <math.h>
#include <numeric>
#include <iterator>
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
	long long int min=10000000;
	sort
	for(long long int i=0;i<size;i++)
	{
		for(long long int j=i+1;j<size;j++)
		{
			if(abs(arr[i]-arr[j])< min) min=abs(arr[i]-arr[j]);
		}
	}
	cout<<min;
	return 0;
} //if ve sort o(nlogn) then look just pairs complexity would be o(nlogn) but now it is o(n^2)
