#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int maxMin(int a[ ], int len) {
  if(len < 2) {
    return false;
  }
  int largest = a[0] , smallest = a[0]; int largestCount = 0; int smallCount = 0, bool isDistinct = false;
  for(int i = 0; i < len; i++) {
      if(a[i] != a[i+1]) {
        isDistinct = true;
      }
      if(a[i] > largest) {
         largest = a[i];
      }
      if(a[i] < smallest) {
        smallest = a[i];
      }
  }
  if(!isDistinct) {
    return false;
  }
  for(int i = 0; i < len; i++) {
      if(a[i] == largest) {
        largestCount++;
      }
      if(a[i] == smallest) {
        smallCount++;
      }
  }
  if(largestCount != smallCount) {
    return false;
  }
  else{
    return true;
  }
}
 

int main() 
{
  int a[] = {200, 10, 151, 160};
  int len = sizeof(a)/sizeof(*a);
  int x = maxMin(a , len);
  cout << x;
  return 0;
}
