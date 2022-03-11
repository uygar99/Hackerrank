#include <iostream> 
using namespace std; 

int main()  
{  
	int size,shift=0;
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
			shift++; 
        }  
        arr[j + 1] = key; 
    }  
    cout<<shift;
    
    return 0;  
}  
