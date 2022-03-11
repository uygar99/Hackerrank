#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{	
	string str1,str2;
	getline(cin,str1);
	long long int len1=str1.length();
	getline(cin,str2);
	long long int len2=str2.length();
	long long int counter=0;
	long long int arr1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	long long int arr2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(long long int i=0;i<len1;i++)
	{
		arr1[str1[i]-97]++;
	}
	for(long long int i=0;i<len2;i++)
	{
		arr2[str2[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		counter=counter+abs(arr1[i]-arr2[i]);
	}
	
	cout<<counter;
	return 0;
}
