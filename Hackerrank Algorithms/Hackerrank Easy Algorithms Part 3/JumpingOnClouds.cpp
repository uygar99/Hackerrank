#include <iostream>
using namespace std;

int main()
{
	int size,power;
	cin>>size;
	cin>>power;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int curr=arr[0];
	int numberOfJumps;
	if(size%power==0) numberOfJumps=(size/power);
	else numberOfJumps=(size/power)+1;
	int energy=100-numberOfJumps;
	for(;curr<=size;)
	{
		if(curr==size) {
			if(arr[0]==1) {
				energy=energy-2;
			}
			break;
		}
		
		if(arr[curr]==1) energy=energy-2;
		curr=curr+power;
		
	}
	cout<<energy;
	
	
	return 0;
}
