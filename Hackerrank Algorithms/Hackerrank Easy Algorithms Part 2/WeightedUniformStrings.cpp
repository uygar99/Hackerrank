#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int size;
    cin>>size;
    int arr2[size];
   	vector <bool> arr(10000000);
    for(int i = 0; i < size; i++)                           
    {   
        cin >> arr2[i];
    }
    for(int i=0;i<str.length();)
	{
        int sum=0;
        int j;
        for(j=0;j<str.length()-i && str[i]==str[i+j];j++){
            sum+=str[i+j]-'a'+1;
            arr[sum]=true;
        }
        i=i+j;
    }
    for(int i = 0; i < size; i++)                           
    {   
        if(arr[arr2[i]]) cout << "Yes" << endl;
        else cout << "No" << endl;   
    }
    
    return 0;
}


