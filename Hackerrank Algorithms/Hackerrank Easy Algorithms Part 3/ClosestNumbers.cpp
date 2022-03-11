#include <iostream>
#include <bits/stdc++.h>
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
	cin >> size;
	int arr[size];
	for (int i=0;i<size;i++) 
	{
		cin >> arr[i];
	}
	
	sorter(arr,size);
	int diff[size];
	adjacent_difference(arr,arr+size,diff);
	int min=*min_element(diff+1,diff+size);
	
	for (int i=1;i<size;i++) {
	    if (diff[i]==min) cout << arr[i-1] << " " << arr[i] << " ";
	}
	return 0;
}

