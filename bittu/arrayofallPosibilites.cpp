#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int arrayOfAllPossibiites(int a[ ], int len){
  for(int i = 0; i < len; i++) {
    int hasValue  = false;
    if(a[i] > len) {
      return false;
    }
    for(int j = 0; j < len; j++) {
      if(a[i] == j) {
        hasValue = true;
        break;
      }
    }
    if(!hasValue)
      return false;
  }
  return true;
}
 

int main() 
{
  int a[] = {0, 2, 3}; 
  int len = sizeof(a)/sizeof(*a);
  int x = arrayOfAllPossibiites(a , len);
  cout << x;
  return 0;
}