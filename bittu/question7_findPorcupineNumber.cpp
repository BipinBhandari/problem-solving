#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int isPrime(int n) {
  for(int i=2; i< n/2; i++){
  	if(n % i == 0 ){
  			return false;
  	}
  }
  return true;
}

int findPorcupineNumber(int n) {
  bool isPorcupineNUmber = false; float porcupineNUmber; bool isNextPrimeNumber = false;
  do {
    n++; 
    if(isPrime(n)) {
      if(isNextPrimeNumber) {
        if((n%10) == 9){
          isPorcupineNUmber =  true;
        }
        else {
          isNextPrimeNumber = false;
        }
      }
      if((n % 10) == 9 && !isNextPrimeNumber){
        isNextPrimeNumber = true;
        porcupineNUmber = n;
      }
    }
  }while(!isPorcupineNUmber);
  return porcupineNUmber;
}

int main() 
{
  int x = findPorcupineNumber(139);
  cout << x;
  return 0;
}