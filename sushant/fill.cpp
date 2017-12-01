#include <iostream>
#include<math.h>
using namespace std;

int *fill(int a[], int len, int k, int n){
	if(k <= 0 || n <= 0) return NULL;
	if(k > n) n = k;
	int *arr2 = new int[n];
	for(int i = 0; i < n; i++){
		arr2[i] = a[i % k];
	}
	return arr2;
}

int main() 
{
	int *result;		
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  	int len = sizeof(a)/sizeof(*a);
	
	result = fill(a, len, 10, 9);
	for (int i = 0; i < 10; ++i)
	{
		cout << result[i] << endl ;
	}
	return 0;
}
