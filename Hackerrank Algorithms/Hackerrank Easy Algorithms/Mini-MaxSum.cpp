#include <iostream>
using namespace std;

int main()
{
	long int max,min;
	long int sumS=0,sumL=0,sum=0;
	long int arr[5];
	for(int i=0;i<5;i++)
	{
		long int input;
		cin>>input;
		if(i==0) {
			max=input;
			min=input;
		}
		else
		{
			if(input<min) min = input;
			if(input>max) max = input;
		}
		arr[i]=input;
		sum=sum+input;	
	}
	sumS=sum-max;
	sumL=sum-min;
	cout<<sumS<<' ';
	cout<<sumL;
	
	return 0;
}
