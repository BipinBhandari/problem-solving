#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isInertial(int a[], int len){
  bool isOdd = false; int maxEven = INT_MIN, minOdd = INT_MAX, max = INT_MIN;
  for(int i = 0; i < len; i++) {
    if(max < a[i]) {
      max = a[i];
    }
    if(a[i] % 2 == 0) {
      if(maxEven < a[i] && a[i] != max) {
        maxEven = a[i];
      }
    }
    else {
      isOdd = true;
      if(a[i] < minOdd) {
        minOdd = a[i];
      }
    }
   
  }
  if(!isOdd || (maxEven >= minOdd) || (max % 2 != 0)) {
    return 0;
  }
  return 1;
}

int main() 
{
  int result;   
  int a[] = {2, 4, 6, 8, 10};
  int len = sizeof(a)/sizeof(*a);
  int x = isInertial(a, len);
  cout << x;
  return 0;
}