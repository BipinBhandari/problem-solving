#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int dualArray(int a[ ], int len) {
  if(len % 2 != 0 ){
    return false;
  }
  int prevsum = a[0] + a[1];
  for(int i = 2; i < len; i= i+2) {
    int currentSum = a[i] + a[i+1];
    if(prevsum != currentSum)
      return false;
  }
  return true;
}
 

int main() 
{
  int a[] = {1, 1, 2};
  int len = sizeof(a)/sizeof(*a);
  int x = dualArray(a , len);
  cout << x;
  return 0;
}
