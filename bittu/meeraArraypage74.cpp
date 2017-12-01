#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int meeraArray(int a[ ], int len){
  for(int i = 0; i < len; i++) {
    if(a[i] > i){
      return false;
    }
  }
  return true;
}
 

int main() 
{
  int a[] = {-1, 0, 0, 8, 0}; 
  int len = sizeof(a)/sizeof(*a);
  int x = meeraArray(a , len);
  cout << x;
  return 0;
} 