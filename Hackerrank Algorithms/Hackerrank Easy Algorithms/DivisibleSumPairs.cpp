#include <iostream>
using namespace std;

int main()
{
	int size,day,month,counter=0,divider;
	cin>>size>>divider;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((arr[i]+arr[j])%divider==0) counter++;
		}
	}
	cout<<counter;
	return 0;
}
