#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cin>>size;
    string str,garbage;
     getline(cin,garbage);
    getline(cin,str);
    bool digit=false,lower=false,upper=false,special=false;
    for(int i=0;i<size;i++)
    {
    	if(str[i]>='a' && str[i]<='z') lower=true;
    	if(str[i]>='A' && str[i]<='Z') upper=true;
    	if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+')
 		special=true;
 		if(str[i]>='0' && str[i]<='9') digit=true;
	}
	int counter=0;
	int counter2=6-size;
	if(!digit) counter++;
	if(!special) counter++;
	if(!upper) counter++;
	if(!lower) counter++;
	if(counter2>0 && counter2>counter)  cout<<counter2;
	else cout<<counter;
    return 0;
}
