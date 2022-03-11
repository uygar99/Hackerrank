#include <iostream>
using namespace std;
int main()
{ 
	int size,temp;
	cin>>size;
	int arr[size];
	temp=size-1;
	while(temp>=0)
	{
		cin>>arr[temp];
		temp--;
	}
	temp=0;
	while(temp<size)
	{
		cout<<arr[temp]<<' ';
		temp++;
	}
	
	
	
	
	
	return 0;
}
