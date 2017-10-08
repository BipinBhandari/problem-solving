#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int meeraArray(int a[ ], int len) {
   bool isOdd = false,equalEven = true, oddNumberStarted = false;  int startEvenCount = 0;
    if(a[0] % 2 != 0) {
       return 0;
    }
    for(int i = 0; i < len; i++) {
      if(a[i] % 2 != 0) {
        isOdd = true;
        oddNumberStarted = true;
      }
      if(!oddNumberStarted) {
        startEvenCount++;
      }
      if(i == len - startEvenCount && oddNumberStarted) {
        if(a[i-1] % 2 == 0) {
          equalEven = false;
        }
      }
      if(i > len - startEvenCount && oddNumberStarted) {
         if(a[i] % 2 != 0) {
           equalEven = false;
         }
      }
    }
    if(equalEven && isOdd){
      return 1;
    }
    return 0;
}
 
int main() 
{
  int a[] = {2, 8, 7, 10, -4};
  int len = sizeof(a)/sizeof(*a);
  int x = meeraArray(a , len);
  cout << x;
  return 0;
}
