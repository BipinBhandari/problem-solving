#include <limits>
#include <iostream>
#include<math.h>
using namespace std;

int isPerfectSquare( int n){
	float root = sqrt(n);
        if (ceil(root) == root) return 1;
	return 0;
}

int countSquarePairs(int a[], int len){

	int pairsCount = 0;

	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			int sum = a[i] + a[j];
			if(a[i] < a[j] && a[i] > 0 && a[j] > 0 && isPerfectSquare(sum) == 1){
				pairsCount++;
			}
		}
	}
	return pairsCount;
}

int main() 
{
	int result;		
	int a[] = {1,3,6}; 
	int len = sizeof(a)/sizeof(*a);
	result = countSquarePairs(a, len);
	cout << "\033[1;31mAnswer : "<< result << "\033[0m\n";
	return 0;
}

