#include <iostream>
#include <math.h>

using namespace std;

int nUpCount(int a[], int len, int n ){
   int sum = 0, nUpCount = 0, prevSum = 0;
   for(int i=0; i<len; i++) {
     prevSum = sum;
     sum += a[i];
     if(prevSum <= n && sum > n) {
        nUpCount++;
     }
   } 
   return nUpCount;
}

int main()
{
    int a[] = {2, 3 ,1, -6, 8, -3, -1, 2}; 
    int len = sizeof(a)/sizeof(*a);
    int x = nUpCount(a , len, 5);
    cout << x;
    return 0;
}