#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    int size; 
	cin >> size;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    for(int i=0;i<size;i++) 
	{
        double A,B,C; 
		cin>>A>>B>>C;
        cout << hex << left << nouppercase << showbase;
        cout << fixed << setprecision(0) << (long long int)A << endl;

        cout << setw(15) << right << setfill('_') << showpos;
        cout << fixed << setprecision(2) << B << endl;

        cout << noshowpos << uppercase;
        cout << fixed << setprecision(9) << scientific << C << endl;
    }
    return 0;

}
