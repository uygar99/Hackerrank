#include <iostream>
using namespace std;
int isKaprekar(int a)
{
	long long int square;
	square= (long long )a*a;
	if(square==1) return 1;
	if(square<100 && square>10)
	{
		long long int x,y;
		x=square/10;
		y=square%10;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<1000 && square>100)
	{
		long long int x,y;
		x=square/100;
		y=square%100;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<10000 && square>1000)
	{
		long long int x,y;
		x=square/100;
		y=square%100;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<100000 && square>10000)
	{
		long long int x,y;
		x=square/1000;
		y=square%1000;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<1000000 && square>100000)
	{
		long long int x,y;
		x=square/1000;
		y=square%1000;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<10000000 && square>1000000)
	{
		long long int x,y;
		x=square/10000;
		y=square%10000;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<100000000 && square>10000000)
	{
		long long int x,y;
		x=square/10000;
		y=square%10000;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<1000000000 && square>100000000)
	{
		long long int x,y;
		x=square/100000;
		y=square%100000;
		if(x+y==a) return 1;
		else return 0;
	}
	if(square<10000000000 && square>1000000000)
	{
		long long int x,y;
		x=square/100000;
		y=square%100000;
		if(x+y==a) return 1;
		else return 0;
	}
	return 0;
	
}
int main()
{
	long long int lower,upper;
	bool a=true;
	cin>>lower>>upper;
	long long int arr[upper-lower+1];
	long long int j=0;
	for(long long int i=lower;i<=upper;i++)
	{
		arr[j]= i;
		j++;
	}
	for(long long int i=0;i<j;i++)
	{
		if(isKaprekar(arr[i])) {
			cout<<arr[i]<<' ';
			a=false;
		}
	}
	if(a) cout<<"INVALID RANGE";
	return 0;
}
