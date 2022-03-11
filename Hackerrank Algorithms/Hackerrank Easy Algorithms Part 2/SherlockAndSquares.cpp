#include <iostream>
using namespace std;

int main()
{
	long long int size,counter=0;
	cin>>size;
	long long int arr[size*2];
	for(long long int i=0;i<size*2;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<size*2;i=i+2)
	{
		long long int counter=0;
		long long int min = arr[i];
		long long int max = arr[i+1];
		for(long long int i=0;i<100000;i++)
		{
			long long int square= (long long) i*i;
			if(square>=min && square<=max) counter++;
		}
		cout<<counter<<'\n';		
	}
	return 0;
}
