#include<iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		long long int len;
		cin>>len;
		bool flag=false;
		long long int arr[len];
		long long int sum1=0;
		long long int sum2=0;
		for(long long int j=0;j<len;j++)
		{
			cin>>arr[j];
		}
		for(long long int j=0;j<len;j++)
		{
			sum1=sum1+arr[j];
		}
		for(long long int j=len-1;j>=0;j--)
		{
			sum2=sum2+arr[j];
			sum1=sum1-arr[j];
			if(sum1-arr[j-1]==sum2) 
			{
				flag=true;
				break;
			}
		}
		if(flag || len == 1) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}
/*#include<iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		long long int len;
		cin>>len;
		bool flag=false;
		long long int arr[len];
		
		for(long long int j=0;j<len;j++)
		{
			cin>>arr[j];
		}
		for(long long int j=0;j<len;j++)
		{
			long long int counter1=0;
			long long int counter2=0;
			for(long long int k=0;k<j;k++)
			{
				counter1+=arr[k];
			}
			for(long long int k=j+1;k<len;k++)
			{
				counter2+=arr[k];
			}
			if(counter1==counter2) 
			{
				flag=true;
				break;
			}
		}
		if(flag) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}*/
