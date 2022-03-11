#include <iostream>
using namespace std;

int main()
{
	long long int size,counter=0;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<size;i++)
	{
		int num=arr[i];
		counter=0;
		int temp=num;
		while(num)
		{
			long long int c;
			c=num%10;
			num=num/10;
			if(c==0);
			else if(temp%c==0) counter++;
		}
		cout<<counter<<'\n';
	}

	
	return 0;
}
