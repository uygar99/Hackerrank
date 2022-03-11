#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int k,n,counter=0;
		cin>>k>>n;
		int arr[k];
		for(int j=0;j<k;j++)
		{
			cin>>arr[j];
			if(arr[j]<=0) counter++;
		}
		if(counter>=n) cout<<"NO"<<'\n';
		else cout<<"YES"<<'\n';
	}
	return 0;
}
