#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int fancyNumber(int a, int firstNumber, int secondNumber) {
  if(firstNumber == a || secondNumber ==a){
  	return true;
  }
  int tempNumber = 3 * secondNumber + 2 * firstNumber; 
  if (tempNumber == a)
     return true;
  if(tempNumber > a)
    return false;
  return fancyNumber(a, secondNumber, tempNumber);
}
 

int main() 
{
  int x = fancyNumber(60, 1, 1);
  cout << x;
  return 0;
}
