#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	long long int size;
	cin>>size;
	string str,garbage;
	getline(cin,garbage);
	for(int i=0;i<size;i++)
	{
		int counter=0;
		getline(cin,str);
		long long int len=str.length();
		char right[len/2];
		char left[len/2];
		long long int arr1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		long long int arr2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		if(len%2==1) counter=-1;
		else
		{
			for(long long int j=0;j<len/2;j++)
			{
				right[j]=str[j];
				left[j]=str[len/2+j];
			}
			for(long long int j=0;j<len/2;j++)
			{
				arr1[right[j]-97]++;
			}
			for(long long int j=0;j<len/2;j++)
			{
				arr2[left[j]-97]++;
			}
			for(long long int j=0;j<26;j++)
			{
				counter=counter+abs(arr1[j]-arr2[j]);
			}
			counter=counter/2;
		}
		cout<<counter<<'\n';
	}
	return 0;
}
