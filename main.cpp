#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //Chef's cash
	int y; //chef's bill
	bool result;
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    
	    result = (x >= y) ? false:true;
	    
	    if(result)
	        cout <<"No" <<endl;
	        
	    else
	        cout <<"Yes" <<endl;
	}
	return 0;
}
