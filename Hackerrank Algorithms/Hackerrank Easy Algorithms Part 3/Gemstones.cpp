#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size,counter=0;
	cin>>size;
	string str,garbage;
	getline(cin,garbage);
	int arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<size;i++)
	{
		getline(cin,str);
		int len=str.length();
		for(int j=0;j<len;j++)
		{	
			for(int k=j+1;k<len;k++)
			{		
				if(str[j]==str[k]) str[k]='}';
			}		
		}
		for(int j=0;j<len;j++)
		{	
			if(str[j]!='}') arr[str[j]-97]++;
				
		}		
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]==size) counter++;
	}
	cout<<counter;
	return 0;
}
	
