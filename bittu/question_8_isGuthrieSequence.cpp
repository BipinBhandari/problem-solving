#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isGuthrieSequence(int a[ ], int len){
  bool isGuthrieSequence = 1; int nextNumber = a[0];
  if(a[len -1] != 1) {
    isGuthrieSequence = 0;
    return isGuthrieSequence;
  }
  for(int i = 0; i < len; i++) {
    if(a[i] != nextNumber) {
       isGuthrieSequence = 0;
       break;
    }
    if(a[i] % 2 == 0) {
      nextNumber = a[i] / 2;
    }
    else {
      nextNumber = (a[i] * 3) + 1;
    }
  }
  return isGuthrieSequence;
}
 

int main() 
{
  int a[] = {8, 4, 2}; 
  int len = sizeof(a)/sizeof(*a);
  int x = isGuthrieSequence(a , len);
  cout << x;
  return 0;
}