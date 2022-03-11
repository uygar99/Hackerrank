#include <iostream>
using namespace std;

int main()
{
    int size; 
	cin >> size;
    for(int i=0;i<size;i++)
    {
       int len, tmp; 
	   cin >> len;
       int res=0;
       for (int j=0;j<len;j++)
       {
          cin >> tmp;
          res^=tmp;
       }
       if (res) cout << "First"<<endl;
       else cout << "Second"<<endl;
    }
    return 0;
}
