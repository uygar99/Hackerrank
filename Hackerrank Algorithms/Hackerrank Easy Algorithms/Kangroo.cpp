#include <iostream>
using namespace std;
int main()
{
	long long int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	while (true)
	{
		if(x1==x2) {cout<<"YES"; break;}
		if((v1>=v2 && x1>x2) || (v2>=v1&&x2>x1)) {cout<<"NO"; break;}
		x1=x1+v1;
		x2=x2+v2;
	}
	return 0;
}
