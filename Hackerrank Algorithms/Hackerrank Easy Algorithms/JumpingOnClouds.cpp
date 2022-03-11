#include <iostream>
using namespace std;

int main()
{
	int sum=0,curr=0;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		int number;
		cin>>number;
		arr[i]=number;
	}
	for(int i=0;;)
	{
		if(curr>=n) break;
		if(arr[i+2]==0) {
			curr=curr+2;
			i=i+2;
			sum++;
		}
		else {
			i=i+1;
			curr=curr+1;
			sum++;	
		}
	}
	cout<<sum-1;
	
	return 0;
}
