#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{	
	string str;
	getline(cin,str);
	bool iseven;
	int counter=0;
	int len=str.length();
	if(len%2==0) iseven=true;
	else iseven=false;
	char arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<len;i++)
	{
		arr[str[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]%2==1) counter++;
	}
	if(iseven)
	{
		if(counter>=1) cout<<"NO";
		else cout<<"YES";
	}
	else
	{
		if(counter>1) cout<<"NO";
		else cout<<"YES";
	}
	return 0;
}
