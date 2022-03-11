#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin ,s);
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]==',') cout<<endl;
		else cout<<s[i];
	}
	return 0;
}
