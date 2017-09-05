#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int stantonMeasure(int a[ ], int len){
  int oneCount = 0, stantonMeasure = 0;
  for(int i = 0; i < len; i++) {
    if(a[i] == 1){
      oneCount++;
    }
  }
  for(int i = 0; i < len; i++) {
    if(a[i] == oneCount){
      stantonMeasure++;
    }
  }
  return stantonMeasure;
}
 

int main() 
{
  int a[] = {1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4}; 
  int len = sizeof(a)/sizeof(*a);
  int x = stantonMeasure(a , len);
  cout << x;
  return 0;
}