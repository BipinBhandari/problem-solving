#include <iostream>
#include<math.h>
using namespace std;

int isPrime(int num){
	int prime = 1;
	if(num <= 2){
		prime = 0;
	}
	for(int j= 2; j<=num/2; j++) {
      if(num%j == 0) {
        prime = 0;
        break;
      }
    } 
    return prime;
}

int isBunker( int a[], int len){ 
	bool oneCount = false, primeCount = false;
	for(int i=0; i<len; i++){
		if(a[i]== 1){
			oneCount = true;
		}else{
			if(isPrime(a[i])){
				primeCount = true;
			}
		}
	}
	if(oneCount && primeCount){
		return 1;
	}
	return 0;
	
}

int main() 
{
  int result;		
  int a[] = {7, 3, 10, 1, 1}; 
  int len = sizeof(a)/sizeof(*a);
  result = isBunker(a, len);
  cout << "Answer : "<< result;
  return 0;
}