#include <iostream>
#include <map>
using namespace std;


int main() 
{
    int size, type; 
    cin >> size; 
    map<string,int> clas; 
    for (int i=0; i<size; i++)
    {
        string name;
        int mark;
        cin >> type >> name;
        if (type == 1)
        {
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2) clas.erase(name);
        else cout << clas[name] << endl;
    }
    return 0;
}
