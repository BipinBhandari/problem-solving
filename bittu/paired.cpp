
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int paired(int a[ ], int len) {
  for(int i = 0; i < len; i++) {
  	 if(i%2==0) {
        if(a[i] % 2 == 0) {
          return false;
        }
     }
     else {
      if(a[i] % 2 != 0) {
        return false;
      }
     }
  }
  return true;
}
 

int main() 
{
  int a[] ={17, 6, 2, 4};
  int len = sizeof(a)/sizeof(*a);
  int x = paired(a , len);
  cout << x;
  return 0;
}
