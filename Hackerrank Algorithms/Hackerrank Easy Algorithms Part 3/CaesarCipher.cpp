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
    int adder;
    cin>>adder;
    adder=adder%26;
    for (int i=0; i<size; i++)
    {
        if (str[i]>='A' && str[i]<='Z') 
        {
            int newChar = str[i] + adder;
            if (newChar>'Z') 
            {
                newChar = 64 + newChar - 'Z';
            }
            str[i] = newChar;
        } 
        else if (str[i]>='a' && str[i]<='z') 
        {
            int newChar = str[i] + adder;
            if (newChar>'z') 
            {
                newChar = 96 + newChar - 'z';
            }
            str[i] = newChar;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<str[i];
    }
    return 0;
}
