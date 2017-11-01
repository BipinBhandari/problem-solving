#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int oddSpaced(int a[ ], int len) {
  int largest = a[0] , smallest = a[0];
  for(int i = 1; i < len; i++) {  
      if(a[i] > largest) {
         largest = a[i];
      }
      if(a[i] < smallest) {
        smallest = a[i];
      }
  }
  int diff = largest - smallest;
  if(diff % 2 != 0)
    return true;
  else
    return false;
}
 

int main() 
{
  int a[] = {200, 10, 151, 160};
  int len = sizeof(a)/sizeof(*a);
  int x = oddSpaced(a , len);
  cout << x;
  return 0;
}
