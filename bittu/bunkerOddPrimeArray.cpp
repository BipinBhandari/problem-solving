#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

bool isPrime(int n) {
  bool isPrime = true;
  if(n==2){
  	return isPrime;
  }	
  for(int i=2; i<n/2 ; i++) {
  	 if(n%i==0){
  	 	isPrime = false;
  	 	break;
  	 }
  }
  return isPrime;
}


int isBunker(int a[ ], int len) {
  bool containsOdd=false, isBunker = false;
  for(int i = 0; i < len; i++) {
      if(a[i] % 2 != 0 && isPrime(a[i+1])) {
        isBunker = true;
        break;
      }
  }
  return isBunker;
}
 

int main() 
{
  int a[] = {4, 9, 6, 15, 21};
  int len = sizeof(a)/sizeof(*a);
  int x = isBunker(a , len);
  cout << x;
  return 0;
}
