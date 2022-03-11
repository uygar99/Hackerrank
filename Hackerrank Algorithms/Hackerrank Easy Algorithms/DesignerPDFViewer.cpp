#include <iostream>
#include <string>
using namespace std;

int main()
{
	int alphabet[26],wordLength,max=0;
	string word;
	for(int i=0;i<26;i++)
	{
		cin>>alphabet[i];
	}
	cin>>word;
	wordLength=word.length();
	for(int i=0;i<wordLength;i++)
	{
		int x;
		x=alphabet[word[i]-97];
		if(x>max) max=x;
	}
	cout<<wordLength*max;
	return 0;
}
