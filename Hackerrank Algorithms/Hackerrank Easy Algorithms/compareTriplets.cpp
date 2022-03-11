#include <iostream>
using namespace std;

int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	int sumA=0,sumB=0;
	cin>>a1;
	cin>>a2;
	cin>>a3;
	cin>>b1;
	cin>>b2;
	cin>>b3;
	if(a1>b1) sumA++;
	if(a2>b2) sumA++;
	if(a3>b3) sumA++;
	if(b1>a1) sumB++;
	if(b2>a2) sumB++;
	if(b3>a3) sumB++;
	cout<<sumA<<' ';
	cout<<sumB;
	
	
	
	
	
	return 0;
}
