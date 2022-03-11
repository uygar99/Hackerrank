#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		sum=sum+input;
	}
	cout<<sum;
	
	
	return 0;
}
