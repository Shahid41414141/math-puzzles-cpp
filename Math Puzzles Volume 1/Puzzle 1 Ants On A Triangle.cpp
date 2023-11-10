#include <iostream>
#include <cmath>
using namespace std;

	int main(){
		
		int n;
		cout << "Enter the number of ANTS: ";
		cin  >> n;
		
		float prob = 2 / pow(2, (float)n);
		
		cout << "\nThe probability that ants will not collide is :" << prob;
		
		return 0;
	
	}
