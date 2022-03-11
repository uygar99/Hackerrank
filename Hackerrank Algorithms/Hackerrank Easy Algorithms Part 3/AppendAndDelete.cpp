#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	string first,second;
	int len1,len2,input,len,counter=0;
	getline(cin, first);
	getline(cin, second);
	cin>>input;
	len1=first.length();
	len2=second.length();
	if(len2>len1)len=len2;
	else len =len1;
	
	for(int i=0;i<len;i++)
	{
		if(first[i]!=second[i])
		{
			counter=counter+len1-i;
			counter=counter+len2-i;
			break;
		}
	}
	if(len2>len1 && (counter%2==0 && input%2==1 || counter%2==1 && input%2==0)) cout<<"No";
	else if(counter<=input) cout<<"Yes";
	else cout<<"No";
	
	return 0;
}
