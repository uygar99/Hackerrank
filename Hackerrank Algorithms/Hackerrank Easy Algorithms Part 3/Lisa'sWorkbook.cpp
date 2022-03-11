#include <iostream>
using namespace std;

int main() {
   	int size,ppp,i;
    cin>>size>>ppp;
    int arr[size];
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
	}
    int p=1,c=0,j=0,m=1;
    for(i=0;i<size;i++)
    { 
		m=1;
        while(m<=arr[i])
        {
           	for(j=1;j<=ppp&&m<=arr[i];j++)
           	{
           	    if(m==p) c++;
           	    m++;
           	}
           	p++;
        }
    }
    cout<<c;
    return 0;
}
