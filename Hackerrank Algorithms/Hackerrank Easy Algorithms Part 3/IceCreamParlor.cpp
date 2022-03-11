#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;

	for(int i=0;i<size;i++)
	{
		int len,money;
		cin>>money;
		cin>>len;
		int arr[len];
		for(int j=0;j<len;j++)
		{
			cin>>arr[j];
		}
		for(int j=0;j<len;j++)
		{
			for(int k=j+1;k<len;k++)
			{
				if(arr[j]+arr[k]==money)
				cout<<j+1<<' '<<k+1<<'\n';
			}
		}
	}
	return 0;
}
