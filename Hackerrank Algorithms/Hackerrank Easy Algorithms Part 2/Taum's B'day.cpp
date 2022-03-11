#include <iostream>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	long long int arr[size*5];
	for(long long int i=0;i<size*5;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<size*5;i=i+5)
	{
		long long int black,white,costb,costw,change;
		black=arr[i];
		white=arr[i+1];
		costb=arr[i+2];
		costw=arr[i+3];
		change=arr[i+4];
		if(costb+change < costw) costw=costb+change;
		else if(costw+change < costb) costb=costw+change;
		cout<<(white*costw)+(black*costb)<<'\n';
	}
	return 0;
}
