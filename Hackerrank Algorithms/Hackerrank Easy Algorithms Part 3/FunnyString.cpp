#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	for(int j=0;j<size+1;j++)
	{
		string str;
		getline(cin,str);
		bool flag=true;
		int len=str.length();
		int arr[len-1];
		for(int i=0;i<len-1;i++)
		{
			arr[i]=abs(str[i]-str[i+1]);
		}
		for(int i=0;i<len-1;i++)
		{
			if(arr[i]!=arr[len-2-i]) flag=false;
		}
		if(flag && j!=0) cout<<"Funny"<<'\n';
		else if(j!=0) cout<<"Not Funny"<<'\n';
	}
	
	return 0;
}
