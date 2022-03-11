#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	float sumP=0,sum0=0, sumN=0;
	float ratP,rat0,ratN;
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		if(input<0) sumN++;
		if(input>0) sumP++;
		if(input==0) sum0++;
	}
	ratP=sumP/size;
	ratN=sumN/size;
	rat0=sum0/size;
	cout<<fixed;
	cout<<ratP<<"\n";
	cout<<ratN<<"\n";
	cout<<rat0;
	return 0;
}
