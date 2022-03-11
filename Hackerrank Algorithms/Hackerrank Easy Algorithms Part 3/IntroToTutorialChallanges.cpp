#include <iostream>
using namespace std;
int main()
{
	int x,size;
	cin>>x>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		if(arr[i]==x) cout<<i;
	}
	return 0;
}
