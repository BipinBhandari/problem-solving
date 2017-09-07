#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int sumFactor(int a[ ], int len) {
  int sum = 0, sumFactor = 0;
  for(int i = 0; i < len; i++) {
    sum += a[i];
  }
  for(int i = 0; i < len; i++) {
    if(a[i] == sum){
      sumFactor++;
    }
  }
  return sumFactor;
}
 

int main() 
{
  int a[] = {0, 0, 0}; 
  int len = sizeof(a)/sizeof(*a);
  int x = sumFactor(a , len);
  cout << x;
  return 0;
}