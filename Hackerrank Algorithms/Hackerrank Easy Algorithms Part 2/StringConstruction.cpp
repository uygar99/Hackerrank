#include <iostream>
#include <string>
using namespace std;

int main()
{
	string garbage;
	int size;
	cin>>size;
	getline(cin,garbage);
	for(int i=0;i<size;i++)
	{
		string str;
		getline(cin,str);
		int len = str.length();
		int arr[26]={0};
		for(int j=0;j<len;j++)
		{
			arr[str[j]-97]=1;
		}
		int counter=0;
		for(int j=0;j<26;j++)
		{
			counter=counter+arr[j];
		}
		cout<<counter<<'\n';
	}
	return 0;
}
