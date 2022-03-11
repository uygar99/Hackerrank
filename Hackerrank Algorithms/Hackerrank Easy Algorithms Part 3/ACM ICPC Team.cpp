#include <iostream>
using namespace std;

int main()
{
	long long int size,topic,count=0;
	string str;
	cin>>size>>topic;
	long long int arr[size];
	char newarr[size][topic];
	for(long long int i=0;i<size;i++)
	{
		for(int j=0;j<topic;j++)
		{
			char a;
			cin>>a;
			newarr[i][j]=a;
		}
	}
	/*for(long long int i=0;i<size;i++)
	{
		long long int x=arr[i];
		for (long long int j=0; j<topic ; j++)
		{
			long long int mode;
			mode=x%10;
			x/=10;
			newarr[i][j]=mode;
		}		
	}*/
	long long int maxsum=0,counter=1;
	for(long long int i=0;i<size;i++)
	{	
		for (long long int j=i+1; j<size ; j++)
		{
			long long int sum=0;
			for(long long int k=0;k<topic;k++)
			{
				if(newarr[i][k]=='1' || newarr[j][k]== '1') sum++;
			}
			if(sum>maxsum) 
			{
				maxsum=sum;
				counter=0;
			}
			if(sum==maxsum) 
			{
				counter++;	
			}	
		}
		
	}
	cout<<maxsum<<'\n';
	cout<<counter;
	
	return 0;
}
