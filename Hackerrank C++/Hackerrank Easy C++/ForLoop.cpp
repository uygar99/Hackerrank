#include <iostream>
using namespace std;
int main()
{
	string arr[10] = {"zero", "one", "two", "three", 
					"four", "five", "six", "seven", "eight", "nine"};
	int first,last;
	cin>>first>>last;
	for(int i=first;i<=last;i++)
	{
		if(i<=9) cout<<arr[i]<<endl;
		else if(i%2==0) cout<<"even"<<endl;
		else cout<<"odd"<<endl;
	}
	return 0;
}


