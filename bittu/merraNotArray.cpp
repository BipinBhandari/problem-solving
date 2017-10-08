#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int meeraArray(int a[ ], int len) {
   bool meeraArray = true;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
          if(a[i] * 2 == a[j]){
             meeraArray = false;
             break;
          }
        }
        if(!meeraArray)
          break;
    }
    return meeraArray;
}
 
int main() 
{
  int a[] = {8, 3, 4};
  int len = sizeof(a)/sizeof(*a);
  int x = meeraArray(a , len);
  cout << x;
  return 0;
}
