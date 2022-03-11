#include<iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cin>>size;
	string garbage;
	getline (cin,garbage);
	for(int i=0;i<size;i++)
	{
		string str1;
		string str2;
		getline (cin,str1);
		getline (cin,str2);
		int arr[26]={0};
		int arr2[26]={0};
		bool flag=false;
		int len1=str1.length();
		int len2=str2.length();
		for(int j=0;j<len1;j++)
		{
			arr[str1[j]-97]=1;
		}
		for(int j=0;j<len2;j++)
		{
			arr2[str2[j]-97]=1;
		}
		for(int j=0;j<26;j++)
		{
			if(arr[j]==1 && arr2[j]==1)
			{
				flag=true;
				break;
			}
		}
		if(flag==true) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}
