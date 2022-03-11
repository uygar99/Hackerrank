
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size*2];
	for(int i=0;i<size*2;i=i+2)
	{
		cin>>arr[i];
		cin>>arr[i+1];
	}
	for(int i=0;i<size*2;i=i+2)
	{
		int x=arr[i];
		int y=arr[i+1];
		x=x%4; 
	    y=y%4;
	    if((y==0)||(y==3)||(x==0)||(x==3)) cout<<"First"<<endl;
	    else cout<<"Second"<<endl;
	}
	
	return 0;
}  
