#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long int n,length,times,left,sum=0,sum2=0;
	string text;
	getline(cin, text);
	length = text.length();
	cin>>n;
	times = n/length;
	left = n%length;
	for(int i=0;i<length;i++)
	{
		if(text[i]=='a') sum++;
	}
	for(int i=0;i<left;i++)
	{
		if(text[i]=='a') sum2++;
	}
	cout<<sum*times+sum2;
	return 0;
}
