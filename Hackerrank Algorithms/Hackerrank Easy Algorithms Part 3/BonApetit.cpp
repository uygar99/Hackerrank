#include <iostream>
using namespace std;

int main()
{
	int size,declined,x,sum=0,y,pay;
	cin>>size>>declined;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	x=arr[declined];
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	int anna=(sum-x)/2;
	cin>>y;
	pay=y-anna;
	if(pay==0) cout<<"Bon Appetit";
	else cout<<pay;
	return 0;
}
