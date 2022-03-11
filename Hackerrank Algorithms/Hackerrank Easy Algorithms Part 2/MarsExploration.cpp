#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int len;
	int counter=0;
	getline(cin,str);
	len=str.length();
	for(int i=0;i<len;i=i+3)
	{
		if(str[i]!='S') counter++;
		if(str[i+1]!='O') counter++;
		if(str[i+2]!='S') counter++;
	}
	cout<<counter;
	
	return 0;
}
