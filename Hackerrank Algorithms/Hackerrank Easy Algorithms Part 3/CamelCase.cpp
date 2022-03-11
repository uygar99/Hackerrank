#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter=1;
	string input;
	getline(cin,input);
	for(int i=0;i<(input.length());i++)
	{
		char x;
		x=input[i];
		if(x<91) counter++;
	}
	cout<<counter;
	return 0;
}
