#include <iostream>
using namespace std;

	int main(){
		
	int n;
	cout<<"Enter the number of cuts: ";
	cin>>n;
	
//	method one:	
//		int result = 1;
//		for(int i=1; i <= n; i++ ){
//			result += i;
//	    }

//    method two:
	int result = 1 + (n * (n+1)) / 2;
	    
	cout<<"\nTotal numbers of cuts are: "<<result;
			
	return 0;

	}
