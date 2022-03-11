#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    int size,tmp,x, a, b;
    cin >> size;
    for(int i = 0; i < size; ++i)
	{
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >>x >>a>>b;
    v.erase(v.begin()+ x - 1);
    v.erase(v.begin()+ a - 1, v.begin() + b - 1);
    cout << v.size()<<endl;
    for (int i = 0; i <v.size();++i) cout << v[i] <<" ";
    return 0;
}
