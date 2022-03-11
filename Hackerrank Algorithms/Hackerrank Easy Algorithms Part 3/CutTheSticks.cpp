#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];		
	}
	int j=0;
	while(j<size)
	{
		int counter=0;
		int min=1000;
		for(int i=0;i<size;i++)
		{
			if(arr[i]<min&&arr[i]!=0) min=arr[i];		
		}
		for(int k=0;k<size;k++)
		{
			if(arr[k]!=0) {
				arr[k]=arr[k]-min;
				counter++;
			}	
		}
		if(counter!=0)
		cout<<counter<<'\n';
		j++;	
	}
	return 0;
}
