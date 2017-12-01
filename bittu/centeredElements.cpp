#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int centeredElements(int a[ ], int len) {
  if(len % 2 == 0 ){
    return false;
  }
  int centeredElementsIndex = len / 2;
  int centeredElements = a[centeredElementsIndex];
  for(int i = 2; i < len; i++) {
    if((i != centeredElementsIndex) && (a[i] < centeredElements)) {
      return false;
    }
  }
  return true;
}
 

int main() 
{
  int a[] = {3, 2, 1, 4, 5};
  int len = sizeof(a)/sizeof(*a);
  int x = centeredElements(a , len);
  cout << x;
  return 0;
}
