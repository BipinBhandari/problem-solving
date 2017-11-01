#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isSym(int a[ ], int len) {
   bool symFlag = false;
    for(int i = 0; i < len/2; i++) {
        if((a[i]%2==0 && a[len-i-1]%2==0) ||(a[i]%2!=0 && a[len-i-1]%2!=0)){
          symFlag = true;
        }else{
          symFlag = false;
          break;
        }
    }
    return symFlag;
}
 
int main() 
{
  int a[] = {2, 7, 8, 9, 10, 11, 13, 10};
  int len = sizeof(a)/sizeof(*a);
  int x = isSym(a , len);
  cout << x;
  return 0;
}
