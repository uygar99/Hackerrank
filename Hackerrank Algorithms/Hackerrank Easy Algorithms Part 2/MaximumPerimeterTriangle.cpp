#include <iostream>
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
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sorter (arr,size);
	bool flag=false;
	for(int i=size-1;i-2>=0;i--)
	{
		if(arr[i-1]+arr[i-2]>arr[i])
		{
			cout<<arr[i-2]<<' '<<arr[i-1]<<' '<<arr[i];
			flag=true;
			break;
		}
	}
	if(!flag) cout<<-1;
	return 0;
}
