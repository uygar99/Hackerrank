#include <iostream>
using namespace std;

int main()
{
	int pagenum,page,count1,count2;
	cin>>pagenum>>page;
	if(page==1) cout<<0;
	else
	{
		count1=(page)/2;
		if(pagenum%2==1) count2=(pagenum/2-count1);
		else if(pagenum%2==0) count2=((pagenum+1)/2-count1);
		if(count1>count2) cout<<count2;
		else cout<<count1;	
		return 0;
	}
	
}
