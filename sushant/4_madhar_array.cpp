#include <iostream>
#include<math.h>
using namespace std;

int isMadhavArray(int a[], int len){
	int lastIndex = 0;
	float n = (-1 + sqrt(1 + 8 * len))/2;
	if(int(n) != n){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	int sum = a[0];
	int startIndex = 1;
	for(int i = 2; i <= n; i++){
		int currentSum = 0;
		int endIndex = startIndex + i - 1;
		for(int j = startIndex; j <= endIndex; j++){
			currentSum += a[j];	
		} 
		if(currentSum != sum){
			return 0;
		}
		startIndex = endIndex + 1;
	}
	return 1;
}

int main() 
{
  int result;		
  int a[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, -2, -1}; 
  int len = sizeof(a)/sizeof(*a);
  result = isMadhavArray(a, len);
  cout << "Answer : "<< result;
  return 0;
}

