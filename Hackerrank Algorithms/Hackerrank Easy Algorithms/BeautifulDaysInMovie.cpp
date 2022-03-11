#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int first,last,divider,counter=0;
	int newNum,quo;
	cin>>first>>last>>divider;
	for(int i=first;i<=last;i++)
	{
		int temp=i;
		newNum=0;
		while (temp != 0)
		{
			quo = temp % 10;
			newNum = 10 * newNum + quo;
			temp = temp / 10;
		}
		if(abs(i-newNum)%divider==0) counter++;
	}
	cout<<counter;
	return 0;
}
