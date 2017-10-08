#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int isSymm(int a[ ], int len) {
  bool isSymm = true;
  for(int i = 0; i < len; i++) {
      if((a[i]%2 == 0 && a[len-i-1]%2 != 0) || (a[i]%2 != 0 && a[len-i-1]%2 == 0)){
        isSymm= false;
      }
  }
  return isSymm;
}
 

int main() 
{
  int a[] = {2, 7, 8, 9, 11, 13, 10};
  int len = sizeof(a)/sizeof(*a);
  int x = isSymm(a , len);
  cout << x;
  return 0;
}
