#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size*3];
	for(int i=0;i<size*3;i=i+3)
	{
		cin>>arr[i];
		cin>>arr[i+1];
		cin>>arr[i+2];
	}

	for(int i=0;i<size*3;i=i+3)
	{
		int money,cost,freecount,packet=0,extra;
		int counter=0;
		money=arr[i];
		cost=arr[i+1];
		freecount=arr[i+2];
		counter=money/cost;
		packet=money/cost;
		while(true)
		{
			extra=packet/freecount;
			packet=packet-extra*freecount+extra;
			counter=counter+extra;
			if(packet<freecount) break;
		}
		cout<<counter<<'\n';
		
		
	}
	return 0;
}
