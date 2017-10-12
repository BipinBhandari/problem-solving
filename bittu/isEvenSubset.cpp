#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isEvenSubset(int m, int n) {
  int evenFactor; bool isEvenSubset = true, checkEqualFactor = true;
  for(int i=1; i<=m/2; i++) {
     if(m%i == 0 && i%2==0){
        evenFactor = i; 
        checkEqualFactor = false; 
        for(int j=1; j<=n/2; j++) {
            if(n%j == 0){
              if(evenFactor == j){
                checkEqualFactor = true;;
              }
            }
        }
     }
     
     if(!checkEqualFactor){
       isEvenSubset = false;
       break;
     }
  }
  return isEvenSubset;
}
 

int main() 
{
  int x = isEvenSubset(18, 12);
  cout << x;
  return 0;
}
