#include <iostream>
using namespace std;

int main()
{
	int size,min=10000;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		int fark=10000;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]==arr[i]) fark=j-i;
		}
		if(fark<min) min=fark;
	}
	if(min==10000) cout<<-1;
	else
	cout<<min;
	return 0;
}
