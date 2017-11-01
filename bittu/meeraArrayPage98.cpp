#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

bool isPrime(int n) {
  bool isPrime = true;
  if(n==1 || n==0){
    return false;
  } 
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

int meeraArray(int a[ ], int len) {
   bool isPrimes = false, isZero = false;
   for (int i=0 ; i<len; i++) {
      if(isPrime(a[i])) {
        isPrimes = true;
      }
      if(a[i] == 0) {
        isZero = true;
      }
   }
   if((isZero && !isPrimes) || (isPrimes && !isZero)) {
    return false;
   }
   return true;
}
 
int main() 
{
  int a[] = {7, 6, 0, 10, 1};
  int len = sizeof(a)/sizeof(*a);
  int x = meeraArray(a , len);
  cout << x;
  return 0;
}
