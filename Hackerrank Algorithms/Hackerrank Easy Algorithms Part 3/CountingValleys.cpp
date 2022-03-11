#include <iostream>
using namespace std;

int main()
{
	int size,countu=0,countd=0,counter=0;
	cin>>size;
	bool flag=false;
	char arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]=='D') countd++;
		if(arr[i]=='U') countu++;
		if(countd>countu) flag=true;
		if(flag && countu>=countd) 
		{
			flag=false;
			counter++;
		} 
	}
	cout<<counter;
	return 0;
}
