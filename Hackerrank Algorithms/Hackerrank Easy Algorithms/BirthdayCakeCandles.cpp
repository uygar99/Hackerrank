#include <iostream>
using namespace std;

int main()
{
	int max=0,sum=0;;
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
		if(input>max) max=input;
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]==max) sum++;
	}
	cout<<sum;
	
	return 0;
}
