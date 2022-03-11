#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	long long int sum = 0;
	while(size>0)
	{
		long long int input;
		cin>>input;
		sum=sum+input;
		size--;
	}
	cout<<sum;
	
	
	return 0;
}
