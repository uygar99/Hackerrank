#include <iostream>
using namespace std;
int main() 
{
	int num;
	string arr[10] = {"Greater than 9", "one", "two", "three", 
					"four", "five", "six", "seven", "eight", "nine"};
	cin >> num;
	if(num > 9) cout << arr[0];
	else cout << arr[num];
	return 0;
}
