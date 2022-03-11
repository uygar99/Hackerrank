#include <iostream>
using namespace std;

int main()
{
	long long int size,rotatecount,queries;
	cin>>size>>rotatecount>>queries;
	long long int arr[size];
	long long int arrq[queries];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<queries;i++)
	{
		cin>>arrq[i];
	}
	for(long long int i=0;i<queries;i++)
	{
		long long int x=arr[(arrq[i]-rotatecount+size*100000) % size];
		cout<<x<<'\n';
	}

	return 0;
}
