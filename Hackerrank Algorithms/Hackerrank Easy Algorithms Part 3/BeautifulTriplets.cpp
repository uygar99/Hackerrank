#include <iostream>
using namespace std;

int main()
{
	int size,fark,counter=0;
	cin>>size>>fark;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]-arr[i]==fark)
			{
				for(int k=j+1;k<size;k++)
				{
					if(arr[k]-arr[j]==fark) counter++;
				}	
			}
			
		}
	}
	cout<<counter;
	
	return 0;
}
