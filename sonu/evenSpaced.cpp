#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int isEvenSpaced(int a[ ], int len) {
  int smallestVal,highestVal;
  for(int i = 0; i < len; i++) {
      if(i==0){
        smallestVal = a[i];
        highestVal = a[i];
      }
      if(a[i]>highestVal){
        highestVal = a[i];
      }

      if(a[i]<smallestVal){
        smallestVal = a[i];
      }
  }
  if((highestVal-smallestVal)%2==0){
    return 1;
  }
  return 0;
}
 

int main() 
{
  int a[] = {200,1,131,140};
  int len = sizeof(a)/sizeof(*a);
  int x = isEvenSpaced(a , len);
  cout << x;
  return 0;
}
