#include <iostream>
using namespace std;

int main() {
    int size, change;
    cin >> size >> change;
    int a[size];
    for(int i=0;i<size;i++)
    {
    	cin>>a[i];
	}
	int counter=change;
	int tmp=0;
	while(true)
	{
		if(counter==0 || tmp==size) break;
		int max=0,index=tmp;
		for(int i=tmp;i<size;i++)
    	{
    		if(a[i]>max) 
			{
				index=i;
				max=a[i];
			}
		}
		if(max<a[tmp]) break;
		if(index!=tmp)
		{
			int temp=a[tmp];
			a[tmp]=a[index];
			a[index]=temp;
			counter--;
			tmp++;
		}
		else 
		{
			tmp++;
			continue;	
		}
		
	}
	for(int i=0;i<size;i++)
    {
    	cout<<a[i]<<' ';
	}
    return 0;
}
