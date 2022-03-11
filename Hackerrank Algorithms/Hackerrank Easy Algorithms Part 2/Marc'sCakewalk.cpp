#include <iostream>
using namespace std;
long long int pow(int a)
{
	long long int mult=1;
	for(long long int i=0;i<a;i++)
	{
		mult=mult*2;
	}
	return mult;
}
void sorter(long long int arr[],int size)
{
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
}
int main()
{
	long long int size;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	long long int sum=0;
	sorter(arr ,size);
	for(long long int i=0;i<size;i++)
	{
		long long int mult=pow(i);
		sum=sum+(arr[size-i-1]*mult);
	}
	cout<<sum;
	return 0;
}
