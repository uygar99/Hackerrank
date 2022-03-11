#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int size;
    cin >> size;
    vector <int> a(size);
    for (int i=0;i<size;i++) cin >> a[i];
    int len;
    cin >> len;
    for(int i=0;i<len;i++)
    {
        int x;
        cin >> x;
        auto low = lower_bound(a.begin(),a.end(),x);
        if(*low==x) cout<<"Yes"<<' '<<low-a.begin()+1<<endl;
        else cout<<"No"<<' '<<low-a.begin()+1<<endl;
    }
    return 0;
}
