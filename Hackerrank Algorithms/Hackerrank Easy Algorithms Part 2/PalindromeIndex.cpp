#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
        {
            string str;
            cin>>str;
            bool flag=true;
            int len=str.size();
            for(int j=0;j<=(len/2);j++)
                {
                    if(str[j]!=str[len-1-j])
                        {
                             if((str[j+1]==str[len-1-j])&&(str[j+2]==str[len-1-j-1]))
                            cout<<j<<'\n';
                           else if((str[j]==str[len-1-j-1])&&(str[j+1]==str[len-1-j-2]))
                            cout<<len-1-j<<'\n';
                            flag=false;
                            break;
                        }
                }
                if(flag) cout<<"-1"<<'\n';
        }
    return 0;
}
