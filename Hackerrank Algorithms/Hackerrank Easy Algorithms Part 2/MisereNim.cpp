#include <iostream>
using namespace std;

int main() {
    long long int size;
	cin>>size;   
	for(long long int i=0;i<size;i++)
	{
		long long int len;
		cin>>len;
		long long int tmp=len;
		long long int counter=0;
		long long int c=0;
        for(long long int j=0;j<len;j++)
		{
			long long int input;
            cin>>input;
            counter^=input;
            if(input==1) c++;
        }
        if((c!=tmp && counter==0) || (c==tmp && c%2!=0)) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
