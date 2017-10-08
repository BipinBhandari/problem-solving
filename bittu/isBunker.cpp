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
  bool containsOne = false, containsPrime=false, isBunker = false;
  for(int i = 0; i < len; i++) {
      if(a[i] == 1){
      	containsOne = true;
      }
      if(isPrime(a[i])) {
      	containsPrime = true;
      }
  }
  if(containsOne && containsPrime) {
  	isBunker = true;
  }
  return isBunker;
}
 

int main() 
{
  int a[] = {7, 6, 10, 1};
  int len = sizeof(a)/sizeof(*a);
  int x = isBunker(a , len);
  cout << x;
  return 0;
}
