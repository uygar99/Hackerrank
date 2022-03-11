#include <iostream>
using namespace std;

int main()
{
	int num1;
	char arr[8];
	cin>>num1;
	for(int i=0;i<8;i++)
	{
		char input;
		cin>>input;
		arr[i]=input;
	}
	if(arr[6]=='A')
	{
		if(num1>=12) num1=num1-12;
		cout<<'0'<<num1;
		for(int i=0;i<6;i++)
		{
			cout<<arr[i];
		}
	}
	else
	{
		if(num1<12) num1=num1+12;
		cout<<num1;
		for(int i=0;i<6;i++)
		{
			cout<<arr[i];
		}
		
	}
	return 0;
}
