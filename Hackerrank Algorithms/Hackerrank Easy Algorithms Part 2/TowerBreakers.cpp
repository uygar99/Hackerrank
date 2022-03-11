#include <iostream>
using namespace std;
int main() 
{   
    int size;
	cin>>size;
    for(int i=0;i<size;i++)
	{
		int length,count;
        cin>>length;
        cin>>count;
        if(length%2==0 || count==1) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
