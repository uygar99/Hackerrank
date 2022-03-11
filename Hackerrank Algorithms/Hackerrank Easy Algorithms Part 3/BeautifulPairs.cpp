#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int arr[1003]={0};
    int arrb[1003]={0};
    int size,inp;
    cin>>size;
    for(int i=0;i<size;i++)
	{
        cin>>inp;
        arr[inp]++;
    }
    for(int i=0;i<size;i++)
	{
        cin>>inp;
        arrb[inp]++;
    }
    int counter=0;
    for(int i=0;i<1002;i++)
	{
        if(arr[i]>0 && arrb[i]>0)
		{
            counter=counter+(min(arr[i],arrb[i]));
        }
    }
    if(counter<size) cout<<counter+1;
    else cout<<counter-1;
    return 0;
}
