#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int subArray(int a[ ], int len) {
  bool subArray = true;int sum = 0;
  for(int i = 0; i < len; i++) {
    for(int j = i+1; j < len; j++) {
      sum += a[j];
    }
    if(a[i] <= sum){
      subArray = false;
      break;
    }
    sum = 0;
  }
  return subArray;
}
 

int main() 
{
  int a[] = {11, 5, 3, 2};
  int len = sizeof(a)/sizeof(*a);
  int x = subArray(a , len);
  cout << x;
  return 0;
}
