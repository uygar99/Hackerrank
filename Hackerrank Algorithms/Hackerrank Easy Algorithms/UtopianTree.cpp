#include <iostream>
using namespace std;

int main()
{
	long long int size,max=0;
	cin>>size;
	long long int arr[size];
	for (long long int i=0;i<size;i++)
	{
		long long int input;
		cin>>input;
		arr[i]=input;
	}
	for (long long int i=0;i<size;i++)
	{
		if(arr[i]>max) max=arr[i]; 
	}
	long long int sonucarr[max+1];
	long long int sonuc=0;
	for(long long int i=0;i<max+1;i++)
	{
			if(sonuc%2==0) sonuc++;
			else if(sonuc%2==1) sonuc=sonuc*2;
			sonucarr[i]=sonuc;
			
	}
	for (long long int i=0;i<size;i++)
	{
		cout<<sonucarr[arr[i]]<<'\n';
	}
	return 0;
}
