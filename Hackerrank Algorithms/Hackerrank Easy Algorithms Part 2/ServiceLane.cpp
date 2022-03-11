#include <iostream>
using namespace std;

int main()
{
	int size,count;
	cin>>size;
	cin>>count;
	int arr[size];
	int arrinp[count*2];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<count*2;i++)
	{
		cin>>arrinp[i];
	}
	for(int i=0;i<count*2;i=i+2)
	{
		int min=100000;
		for(int j=arrinp[i];j<=arrinp[i+1];j++)
		{
			if(arr[j]<min) min=arr[j];	
		}
		cout<<min<<'\n';	
	}
	
	
	
	
	
	return 0; 
}
