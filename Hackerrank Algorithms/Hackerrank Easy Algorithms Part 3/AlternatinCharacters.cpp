#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int size,counter=0;
	char garbage;
	cin>>size;
	cin>>garbage;
	
	for(int i=0;i<size;i++)
	{
		int length;
		string arr;
		counter=0;
		getline(cin, arr);
		length=arr.length();
		if(garbage==arr[0] && i==0) counter++;
		for(int j=0;j<length;j++)
		{
			if((arr[j]==arr[j+1]) && (arr[j]=='A' || arr[j]=='B'))
			{
				counter++;
			}
		}
		cout<<counter<<'\n';
	}
	return 0;
}
