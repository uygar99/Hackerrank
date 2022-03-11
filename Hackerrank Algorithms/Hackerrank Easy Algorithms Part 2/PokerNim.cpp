#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int len,k;
        cin>>len>>k;
        int temp=0;
        for(int i=0;i<len;i++)
        {
        	int x;
            cin>>x;
            temp=temp^x;
        }
        if(temp!=0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
}
