#include <iostream>
#include <math.h>

using namespace std;

int primeCount(int start, int end){
  int primeCount = 0;
  for(int i=start ; i<=end; i++) {
    bool isPrime = true;
    if(i<=1){
      isPrime = false;
    }
    for(int j= 2; j<=i/2; j++) {
      if(i%j == 0) {
        isPrime = false;
        break;
      }
    } 
    if(isPrime) {
      primeCount++;
    }
  }
  return primeCount;

} 

int main()
{
    int x = primeCount(-10, 6);
    cout << x;
    return 0;
} 