#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int size1,size2,counter=0;
	cin>>size1>>size2;
	bool flag;
	int arr1[size1],arr2[size2];
	for(int i=0;i<size1;i++)
	{
		int input;
		cin>>input;
		arr1[i]=input;
	}
	for(int i=0;i<size2;i++)
	{
		int input;
		cin>>input;
		arr2[i]=input;
	}
	for(int i=arr1[size1-1];i<=arr2[0];i++)
	{
		for(int j=0;j<size1;j++)
		{
			for(int k=0;k<size2;k++)
			{
				if(arr2[k]%i!=0) {
					flag=true;
				}
			}
			if(flag || i%arr1[j]!=0){
				counter++;
				flag=false;
				break;
			} 
		}
	}
	if(arr2[0]-arr1[size1-1]-counter+1>0)
	cout<<arr2[0]-arr1[size1-1]-counter+1;
	else cout<<0;
	
	return 0;
}
