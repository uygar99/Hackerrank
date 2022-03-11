#include <iostream>
using namespace std;
int main(){
	int size,maxSum=0,maxNumber,counter=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		int input;
		cin>>input;
		arr[i]=input;
	}
	for(int i=0;i<size;i++)
	{
		int number = arr[i];
		int sum=0 ;
		for(int j=0;j<size;j++)
		{
			if(arr[j]==number) sum++; 
		}
		if(sum>maxSum) {
			maxSum=sum;
			maxNumber=arr[i];
		}
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]==maxNumber) counter++;
	}
	cout<<size-counter;
	
	
	return 0;
}
