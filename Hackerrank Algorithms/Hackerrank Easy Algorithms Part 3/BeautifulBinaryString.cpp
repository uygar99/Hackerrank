#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size;
	cin>>size;
	string str,garbage;
	getline(cin,garbage);
	getline(cin,str);
	int counter = 0;
	int len = str.length();
	for(int i=0;i<=len-3;i++)
	{
	    if(str[i] == '0' && str[i+1] == '1' && str[i+2] == '0')
	    {
	    	counter++;
			i += 2;
		}        
	}
	cout<<counter;
	return 0;
}
