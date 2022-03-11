#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
    cin >> size;
    for(int i = 0; i < size; i++)
	{
        int len,count=0,count1=0;
        bool flag=false;
        cin >> len;
        string str;
        cin >> str;
        for(int j=0;j<len;j++)
        {
            if(str[j]=='_')
            {
                flag=1;
                break;
            }
        }
        for(int j=0;j<len;j++)
        { 
			count=0;
        	if(str[j]!='_')
        	{
            	for(int k=0;k<len;k++)
           		{
               		if(str[j]==str[k])
                	count++;
            	}
        	} 
       		if(count==1)
         	{
            	break;
         	}
        }
        if(count!=1 && flag==true)
        {
		   	cout<<"YES"<<endl;
           	continue;
		}
       else if(flag==false)
       {
           for(int j=0;j<len;j+=count1)
           {
		   	    count1=0;
               	for(int k=j;str[k]!=str[j],k<len;k++)
               	{
                    if(str[j]==str[k])
                    count1++;
            	}
            	if(count1==1) break;
           }
       }
        if(flag==false && count1>1)
        {
			cout<<"YES"<<endl; 
        	continue;
		}
        else cout<<"NO"<<endl;
    }
    return 0;
}

