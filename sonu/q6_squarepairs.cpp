#include <iostream>
#include<math.h>
using namespace std;

int isPerfectSquare( int n){
	float sqrt_res = sqrt(n);
	if(ceil(sqrt_res) == sqrt_res){
			return 1;
	}
	return 0;
}

int countSquarePairs(int a[ ], int len){
	int count=0;

	if(len<2){
		return 0;
	}

	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			if(a[i]>0 && a[j]>0 && i!=j){
				if(a[i]>a[j]){
					if(isPerfectSquare(a[j] + a[i] )){
						count ++;
					}
				}
			}
		}
	}
	return count;
}

int main() 
{
  int result;		
  int a[] = {9}; 
  int len = sizeof(a)/sizeof(*a);
  result = countSquarePairs(a, len);
  cout << "Answer : "<< result;
  return 0;
}