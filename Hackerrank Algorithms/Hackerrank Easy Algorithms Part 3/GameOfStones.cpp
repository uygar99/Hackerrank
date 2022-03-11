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
	for(int i=0;i<size;i++)
	{
		double res=arr[i]%7;
		double res2=(arr[i]-1)%7;
		if (res == 0 || res2 == 0) cout<<"Second"<<endl;
   		else cout<<"First"<<endl;	
	}
	return 0;
}
