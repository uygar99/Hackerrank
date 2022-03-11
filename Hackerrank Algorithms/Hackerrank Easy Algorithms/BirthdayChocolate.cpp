#include <iostream>
using namespace std;

int main()
{
	int size,day,month,counter=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	cin>>day;
	cin>>month;
	for(int i=0;i<size-month+1;i++)
	{
		int sum=0;
		for(int j=i;j<i+month;j++)
		{
			sum=sum+arr[j];
			
		}
		if(sum==day) counter++;
	}
	cout<<counter;
	return 0;
}
