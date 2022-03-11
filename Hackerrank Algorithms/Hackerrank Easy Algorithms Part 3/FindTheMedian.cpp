#include <iostream> 
using namespace std; 

int main()  
{  
	long long int size;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
    long long int key, j;  
    for (long long int i = 1; i < size; i++) 
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
    cout<<arr[size/2];
    
    return 0;  
}  
