#include <iostream>
#include <math.h>
using namespace std;
void sorter(int arr[],int size)
{
	int key, j;  
    for (int i = 1; i < size; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1; 
        }  
        arr[j + 1] = key; 
    }
}

int main() 
{
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int len,key;
		cin>>len;
		cin>>key;
		int arr[len];
		int arr2[len];
		for(int j=0;j<len;j++)
		{
			cin>>arr[j];
		}
		for(int j=0;j<len;j++)
		{
			cin>>arr2[j];
		}
		sorter(arr,len);
		sorter(arr2,len);
		bool flag=true;
		for(int j=0;j<len;j++)
		{
			if(arr[j]+arr2[len-1-j] < key) 
			{
				flag=false;
				break;
			}
		}
		if(flag) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}
