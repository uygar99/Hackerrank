#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x="abcdefghijklmnopqrstuvwxyz";
	string str;
	bool flag=true;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(str[i]==x[j] || str[i]==x[j]-32) x[j]='!';
		}
	}
	for(int j=0;j<26;j++)
	{
		if(x[j]!='!') flag=false;	
	}
	if(flag) cout<<"pangram";
	else cout<<"not pangram";
	
	return 0;
}
