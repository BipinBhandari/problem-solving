#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int *fill(int a[ ], int k, int n, int len) {
  int sum = 0, j = 0;
  for(int i = 0; i < n; i++) {
     if(i+1 < k){
        a[i] = a[i];
     }
     else {
       a[i] = a[j];
       j++;
       if(j+1 == k) {
         j=0;
       } 

     }
  }
  return a;
}
 

int main() 
{
  int a[] = {1,2,3,5, 9, 12,-2,-1};
  int len = sizeof(a)/sizeof(*a);
  int* x = fill(a , 3, 10, len);
  cout << x[1] << endl;
  return 0;
}