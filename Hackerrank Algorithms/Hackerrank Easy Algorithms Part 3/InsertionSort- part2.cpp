#include <iostream> 
using namespace std; 

int main()  
{  
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
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
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<' ';
		} 
		cout<<'\n';
    }  
    
    return 0;  
}  
