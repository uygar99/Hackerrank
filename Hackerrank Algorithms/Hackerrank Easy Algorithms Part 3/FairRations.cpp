#include <iostream>
using namespace std;

int main() {
    int size,ct=0,counter=0,temp;
    bool flag=false;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0){
            ct++;
            if(flag)
			{
                counter += 2*(i-temp);
                flag=false;
            }
            else
			{
                temp=i;
				flag=true;
            }
        }
    }
    if(ct%2!=0){
        cout<<"NO";
    }
    else{
        cout<<counter;
    }
    return 0;
}

