#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int sumIspower(int a[ ], int len) {
  int sum = 0;
  for(int i = 0; i < len; i++) {
     sum += a[i];
  }
  bool powerOfTwo = !(sum == 0) && !(sum & (sum - 1));
  return powerOfTwo;
}
 

int main() 
{
  int a[] = {8,8,8,8,8,8,8,8};
  int len = sizeof(a)/sizeof(*a);
  int x = sumIspower(a , len);
  cout << x;
  return 0;
}