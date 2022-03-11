#include <iostream>
using namespace std;

int main()
{
	int size,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]==1) counter1++;
		if(arr[i]==2) counter2++;
		if(arr[i]==3) counter3++;
		if(arr[i]==4) counter4++;
		if(arr[i]==5) counter5++;
	}
	if(counter1>=counter2 && counter1>=counter3 && counter1>=counter4 && counter1>=counter5) cout<<1;
	else if(counter2>=counter1 && counter2>=counter3 && counter2>=counter4 && counter2>=counter5) cout<<2;
	else if(counter3>=counter1 && counter3>=counter2 && counter3>=counter4 && counter3>=counter5) cout<<3;
	else if(counter4>=counter1 && counter4>=counter2 && counter4>=counter3 && counter4>=counter5) cout<<4;
	else if(counter5>=counter1 && counter5>=counter2 && counter5>=counter3 && counter5>=counter4) cout<<5;

	return 0;
}
