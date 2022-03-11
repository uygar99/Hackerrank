#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cin>>size;
	string arr[size+1];
	for(int i=0;i<size+1;i++)
	{
		string str;
		getline(cin,str);
		arr[i]=str;
	}
	for(int i=2;i<size;i++)
	{
		for(int j=1;j<size-1;j++)
		{
			if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1])
			arr[i][j]='X';
		}
	}
	for(int i=1;i<=size;i++)
	{
		cout<<arr[i]<<'\n';
	}
	
	
	
	
	
	return 0;
}
