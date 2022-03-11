#include <iostream>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	bool flag=false;
	
	for(long long int i=0;i<size;i++)
	{
		flag=false;
		long long int counter1=0,counter2=0;
		if(arr[i]%3==0)
		{
			for(long long int j=0;j<arr[i];j++)
			{
				cout<<5;
				flag=true;
			}
		}
		else if(arr[i]%5==0)
		{
			for(long long int j=0;j<arr[i];j++)
			{
				cout<<3;
				flag=true;
			}
		}
		else
		{
			while(true)
			{
				arr[i]=arr[i]-3;
				counter1=counter1+3;
				if(arr[i]%5==0) 
				{
					flag=true;
					break;
				}
				if(flag) break;
				if(!flag && arr[i]<3) break;
			}
			if(flag)
			{
				while(true)
				{
					arr[i]=arr[i]-5;
					counter2=counter2+5;
					if(arr[i]==0) break;
				}
			}
		}
		if(flag)
		{
			for(long long int  j=0;j<counter1;j++)
			{
				cout<<5;
			}
			for(long long int  j=0;j<counter2;j++)
			{
				cout<<3;
			}
		}
		else if(!flag) cout<<-1;
		cout<<'\n';
	}
	return 0;
}
