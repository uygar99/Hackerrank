#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	cout<<a.length()<<' '<<b.length()<<endl;
	for(int i=0;i<a.length();i++) cout<<a[i];
	for(int i=0;i<b.length();i++) cout<<b[i];
	char temp=b[0];
	b[0]=a[0];
	a[0]=temp;
	cout<<endl;
	for(int i=0;i<a.length();i++) cout<<a[i];
	cout<<' ';
	for(int i=0;i<b.length();i++) cout<<b[i];
	
	return 0;
}
