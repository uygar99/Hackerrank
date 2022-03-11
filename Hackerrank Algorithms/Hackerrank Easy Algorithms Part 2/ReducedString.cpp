#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int k=0;
    while(k<100)
    {
    	for(long long int i=0;i<str.length();i++)
	    {
	    	int j=i+1;
	    	while(true)
	    	{
	    		if(str[j]!='0') break;
	    		j=j+1;
			}
	        if(str[i]==str[j] && str[i]!=0)
	        {
	            str[i]='0';
	            str[j]='0';  
	        }
	    } 
		k++;   
	}
    bool flag=false;
    for(long long int i=0;i<str.length();i++)
    {
        if(str[i]!='0') 
        {
            cout<<str[i];
            flag=true;
        }
    }
    if(!flag) cout<<"Empty String";
    return 0;
}
