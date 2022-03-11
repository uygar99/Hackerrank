#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,str2;
    getline(cin,str);
    getline(cin,str2);
    char arr[str.length()];
    for(int i=0;i<str.length();i++)
    {
    	if((str[i]=='1' && str2[i]=='0') || (str[i]=='0' && str2[i]=='1'))
    	{
    		arr[i]='1';
		}
		else arr[i]='0';
	}
	for(int i=0;i<str.length();i++)
    {
    	cout<<arr[i];
	}
    return 0;
}
