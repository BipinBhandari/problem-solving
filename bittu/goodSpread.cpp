#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int goodSpread(int a[ ], int len) {
   bool goodSpread = true; int repeatedCount = 0;
  for(int i = 0; i < len; i++) {
     for(int j = i; j < len; j++) {
        if(a[j] == a[i]) {
          repeatedCount++;
        }
     }
     if(repeatedCount > 3){
       goodSpread = false;
       break;
     }
     else{
      repeatedCount = 0;
     }
  }
  return goodSpread;
}
 

int main() 
{
  int a[] = {2, 1, 2, 5, 2, 1, 5, 9, 5 ,5 ,5};
  int len = sizeof(a)/sizeof(*a);
  int x = goodSpread(a , len);
  cout << x;
  return 0;
}
