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
		int len=str.length();
		int counter=0;
		for(int i=0;i<len/2;i++)
		{
			int fark;
			if(str[i]!=str[len-i-1])
			{
				fark=abs(str[i]-str[len-i-1]);
				counter=counter+fark;
			}
		}
		if(j!=0)
		cout<<counter<<'\n';
	}
	
	return 0;	
}
