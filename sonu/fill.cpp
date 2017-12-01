#include <iostream>
#include<math.h>
#include <limits.h>
using namespace std;

int *fill(int arr[], int k, int n, int len){
	int countRepIndex = 0;
	if(k < 1 || n < 1){
		return 0;
	}
	for(int i=0; i<n; i ++){
	   if(k==countRepIndex) 
		 	countRepIndex = 0;
		arr[i] = arr[countRepIndex];
		countRepIndex++;
	}
	return arr;
}

int main() 
{
  int a[] = {4, 2, -3, 12}; 
  int len = sizeof(a)/sizeof(*a);
  int n = 4;
  int k = 0;
  int* result = fill(a,k,n, len);
  for(int m=0; m<n; m++){
  	cout << result[m] << endl;
  }
  return 0;
}