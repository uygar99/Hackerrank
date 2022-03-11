#include <iostream>
using namespace std;

int main()
{
	int money,keyboard,usb,max=0;
	cin>>money>>keyboard>>usb;
	int keyboardarr[keyboard];
	int usbarr[usb];
	for(int i=0;i<keyboard;i++)
	{
		cin>>keyboardarr[i];
	}
	for(int i=0;i<usb;i++)
	{
		cin>>usbarr[i];
	}
	for(int i=0;i<usb;i++)
	{
		for(int j=0;j<keyboard;j++)
		{
			if(keyboardarr[j]+usbarr[i]<=money && keyboardarr[j]+usbarr[i]>max) max=keyboardarr[j]+usbarr[i];
		}	
	}
	if(max==0) cout<<-1;
	else cout<<max;
	return 0;
}
