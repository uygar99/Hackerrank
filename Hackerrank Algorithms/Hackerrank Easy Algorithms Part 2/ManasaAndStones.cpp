#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
	    int count,pos1,pos2;
		cin>>count;
		cin>>pos1;
	    cin>>pos2;
	    int first=(count-1)*min(pos1,pos2);
	    cout<<first<<" ";
	    int sum=0;
	    while(sum+first<(count-1)*max(pos1,pos2))
	    {
	        sum=sum+abs(pos2-pos1);
	        cout<<first+sum<<" ";
	    }
	    cout<<'\n';
	}
    return 0;
}
