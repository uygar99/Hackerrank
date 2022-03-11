#include <iostream>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	for(long long int i=0;i<size;i++)
	{
		long long int a;
		cin>>a;
		cout<<4294967295-a<<'\n';
	}
	return 0;
}
