#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool is_prime(int num){
    bool flag=true;
    if(num%2==0) flag=false;
    else
    {
    	for(int i = 3; i <= num / 2; i=i+2) {
       	if(num % i == 0) {
          	flag = false;
          	break;
       		}
    	}
	}
    return flag;
}
int main()
{
	long long int size,K;
	cin>>size>>K;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	long long int counter=0;
	long long int j=2;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%j==0) 
		{
			counter++;
			break;
		}
	}
	for(j=3;j<=K;j=j+2)
	{
		if(is_prime(j))
		{
			for(long long int i=0;i<size;i++)
			{
				if(arr[i]%j==0) 
				{
					counter++;
					break;
				}
			}
		}	
	}
	if(counter%2==0) cout<<"EKIN";
	else cout<<"SADIK";
	
	
	
	
	
	/*long long int E,K,N;
	cin>>E>>K>>N;
	int max= maxl(E,K);
	int min= minl(E,K);
	if(E>K)
	{
		if(N<min)
		{
			max=E+N;
			min=E-N;
		}
		else if(N>=min && N<=max)
		{
			int a = N-K;
			int temp = min;
			min=max-N;
			max=E+K-a;
		}
		else
		{
			int a = N-E;
			int b = N-K;
			min=a;
			max=E+K -b;
		}
		cout<<min<<' '<<max;
	}
	else
	{
		if(N<E)
		{
			min=E-N;
			max=N+E;
		}
		else if(N>=E && N<=K)
		{
			min=N-E;
			max=N+E;
		}
		else
		{
			int a = N-E;
			int b = N-K;
			min=a;
			max=E+K -b;
		}
		cout<<min<<' '<<max;
	}*/
	
	
	
	return 0;
}
