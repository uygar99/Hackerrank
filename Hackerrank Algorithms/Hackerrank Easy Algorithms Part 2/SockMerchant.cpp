#include <iostream>
using namespace std;

int main()
{
	int size,counter=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((arr[i]==arr[j]) && (arr[i]!=0) && (arr[j]!=0)) 
			{
				counter++;
				arr[j]=0;
				arr[i]=0;
				break;	
			}
		}
	}
	cout<<counter;
	return 0;
}
	
