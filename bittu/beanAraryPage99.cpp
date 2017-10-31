#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int beanArray(int a[ ], int len) {
  for(int i = 0; i < len; i++) {
      for(int j = 0; j < len; j++) {
          if(a[j] != a[i]+1 || a[j]!= a[i]-1 ){
            return false;
          }
      }
  }
  return true;
}
 

int main() 
{
  int a[] = {3, 4, 5, 7};
  int len = sizeof(a)/sizeof(*a);
  int x = beanArray(a , len);
  cout << x;
  return 0;
}
