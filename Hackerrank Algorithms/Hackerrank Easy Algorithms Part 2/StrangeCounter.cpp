#include <iostream>
using namespace std;

int main()
{
	long long int input;
	cin>>input;
	long long int temp=3;
	while(input>temp)
	{
		input=input-temp;
		temp=temp*2;
	}
	cout<<temp-input+1;
}

