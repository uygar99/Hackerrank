#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int size;
	cin>>size;
	string garbage;
	getline(cin,garbage);
	bool flag=true;
	for(long long int k=0;k<size;k++)
	{
		string str;
		getline(cin,str);
		long long int len=str.length();
		string hr="hackerrank";
		long long int arr[10]={0,0,0,0,0,0,0,0,0,0};
		long long int i=0;
		for(long long int j=0;j<len;j++)
		{
			if(str[j]==hr[i])
			{
				arr[i]=1;
				i++;
			}
		}	
		for(long long int j=0;j<10;j++)
		{
			if(arr[j]==0) flag=false;
		}		
	
		if(flag) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}
	
