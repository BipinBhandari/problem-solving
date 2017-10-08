#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isNice(int a[ ], int len) {
  bool isNice = false;
  for(int i = 0; i < len; i++) {
     for(int j = 0; j < len; j++) {
        if(a[i]+1==a[j] || a[i]-1==a[j]){
          isNice = true;;
          break;
        }
        else {
          isNice = false;
        }
     }
     if(!isNice)
       break;
  }
  return isNice;
}
 

int main() 
{
  int a[] = {3, 4, 5, 7};
  int len = sizeof(a)/sizeof(*a);
  int x = isNice(a , len);
  cout << x;
  return 0;
}
