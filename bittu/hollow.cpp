#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int sumIsPower(int a[ ], int len) {
  int precededCount = 0, followedCount = 0, zeroCount = 0; 
  bool zeroCountstarted = false; 
  if(a[0] == 0) {
    return 0;
  }
  for(int i = 0; i < len; i++) {
     if(a[i] == 0) {
       zeroCountstarted = true;
       zeroCount++;
     }
     if(!zeroCountstarted) {
       precededCount++;
     }
     if(zeroCountstarted && a[i] != 0){
       followedCount++;
     }
  }
  if(zeroCount < 3 || precededCount != zeroCount || followedCount != zeroCount){
    return 0;
  }
  return 1;
}
 

int main() 
{
  int a[] = {1,2, 0,0, 3,4};
  int len = sizeof(a)/sizeof(*a);
  int x = sumIsPower(a , len);
  cout << x;
  return 0;
}
