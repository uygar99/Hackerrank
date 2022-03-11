#include<iostream>
using namespace std;
int main()
{
	long long int homeLeft,homeRight,appleTree,orangeTree,appleCount,orangeCount,appleCounter=0,orangeCounter=0;
	cin>>homeLeft;
	cin>>homeRight;
	cin>>appleTree;
	cin>>orangeTree;
	cin>>appleCount;
	cin>>orangeCount;
	for(long long int i=0;i<appleCount;i++)
	{
		long long int input;
		cin>>input;
		if(appleTree>=homeLeft-input && appleTree<=homeRight-input) appleCounter++;
	}
	for(long long int i=0;i<orangeCount;i++)
	{
		long long int input;
		cin>>input;
		if(orangeTree<=homeRight-input && orangeTree>=homeLeft-input) orangeCounter++;
	}
	cout<<appleCounter<<'\n';
	cout<<orangeCounter;
	return 0;
	
}
