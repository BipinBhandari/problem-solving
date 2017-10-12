#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int evenSpaced(int a[ ], int len) {
  int small = a[0], large = a[0];
  for(int i = 1; i < len; i++) {
    if(a[i]<small)
      small=a[i];
    if(a[i]>large)
      large=a[i];
  }
  int difference = large - small;
  if(difference % 2 != 0)
    return false;
  else
    return true;
}
 

int main() 
{
  int a[] = {100, 19, 131, 140};
  int len = sizeof(a)/sizeof(*a);
  int x = evenSpaced(a , len);
  cout << x;
  return 0;
}
