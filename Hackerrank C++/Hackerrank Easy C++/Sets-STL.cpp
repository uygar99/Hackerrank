#include <iostream>
#include <set>
using namespace std;

int main() {
	int size;
	set<int> seti;
	cin >> size;
	for (int i=0; i<size; i++)
	{
	    int type, query;
	    cin >> type >> query;
	    switch (type){
	        case 1:
	            seti.insert(query);
	            break;
	        case 2:
	            seti.erase(query);
	            break;
	        case 3:
	        	if(seti.find(query) == seti.end()) cout<<"No"<<endl;
	        	else cout<<"Yes"<<endl;
	            break;
	    }
	}  
	return 0;
}
