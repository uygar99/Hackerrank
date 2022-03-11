#include <iostream>
using namespace std;

int main()
{
	int max,sale,min,money,price,counter=0;
	cin>>max>>sale>>min>>money;
	price=max;
	while(true)
	{
		money=money-price;
		price=price-sale;
		counter++;
		if(price<=min) 
		{
			price=min;
			break;
		}
		else if(money-price<0)	 break;
	} 
	while(money>=0)
	{
		money-=price;
		counter++;
	}
	cout<<counter-1;
	
	return 0;
}
