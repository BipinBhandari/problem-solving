#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int beanArray(int a[ ], int len) {
  bool beanArray = true, contain9 = false, contain13 = false, contain16=false, contain7 = false;
  for(int i = 0; i < len; i++) {
    if(a[i] == 9)
      contain9 = true;
    if(a[i] == 13)
      contain13 = true;
    if(a[i] == 7)
      contain7 = true;
    if(a[i] == 16)
      contain16 = true;
  }
  if((contain9 && !contain13) || (contain7 && contain16)) 
    beanArray = false;
  return beanArray;
}
 

int main() 
{
  int a[] = {9, 7, 16};
  int len = sizeof(a)/sizeof(*a);
  int x = beanArray(a , len);
  cout << x;
  return 0;
}
