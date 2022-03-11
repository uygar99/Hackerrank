#include <iostream>
using namespace std;

int main()
{
	int input,shared=5,liked,cumulative=0;
	cin>>input;

	for(int i=0;i<input;i++)
	{
		liked=shared/2;
		shared=liked*3;
		cumulative=cumulative+liked;
	}
	cout<<cumulative;
	return 0;
}
